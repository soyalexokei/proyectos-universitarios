//#######################################//
//-- RAÍZ DEL PROYECTO DE MAD SERVICES --//
//#######################################//

//-- Importamos el archivo raíz de configuración de MAD Services =>
const madservices = require('./app.js');
//-- Importamos la depuración del código de MAD Services =>
const debug = require('debug')('madservices:server');
//-- Importamos el Módulo HTTP para establecer comunicaciones Cliente-Servidor =>
const http = require('http');
//-- Importamos la configuración del entorno ENV para poder usar su información =>
require('./config/env.js');

//-- Obtener el Puerto de Aplicación del Entorno ENV y almacenarlo en nuestro Servidor MAD Services =>
//-- ########################################## --//
const puerto = normalizePort(process.env.PUERTO);
madservices.set('port', puerto);
//-- ########################################## --//

//-- Creamos el Servidor HTTP para establecer comunicaciones Cliente-Servidor =>
//-- ################################################## --//
const madservicesServer = http.createServer(madservices);
//-- ################################################## --//

//-- Escuchando en el Puerto de Aplicación establecido, en todas las interfaces de red =>
//-- ########################################## --//
madservicesServer.listen(process.env.PUERTO, () => {
  console.log(`Servidor de MAD Services escuchando en: http://${process.env.MYSQL_HOST}:${process.env.PUERTO}/`);
});
madservicesServer.on('error', onError);
madservicesServer.on('listening', onListening);
//-- ########################################## --//

//-- Normalizar un Puerto de Aplicación en un número, una cadena, o un booleano falso =>
//-- ########################## --//
function normalizePort(val) {
  var puerto = parseInt(val, 10);

  if (isNaN(puerto)) {
    // named pipe
    return val;
  }

  if (puerto >= 0) {
    // port number
    return puerto;
  }

  return false;
}
//-- ########################## --//

//-- Escucha de eventos para el evento de "error" del servidor HTTP =>
//-- ####################################################### --//
function onError(error) {
  if (error.syscall !== 'listen') {
    throw error;
  }

  var bind = typeof puerto === 'string'
    ? 'Pipe ' + puerto
    : 'Port ' + puerto;

  // handle specific listen errors with friendly messages
  switch (error.code) {
    case 'EACCES':
      console.error(bind + ' se requieren elevados privilegios');
      process.exit(1);
      break;
    case 'EADDRINUSE':
      console.error(bind + ' está ya en uso');
      process.exit(1);
      break;
    default:
      throw error;
  }
}
//-- ####################################################### --//

//-- Escucha de eventos para el evento de "escucha" del servidor HTTP.
//-- #################################### --//
function onListening() {
  var addr = madservicesServer.address();
  var bind = typeof addr === 'string'
    ? 'pipe ' + addr
    : 'port ' + addr.puerto;
  debug('Listening on ' + bind);
}
//-- #################################### --//