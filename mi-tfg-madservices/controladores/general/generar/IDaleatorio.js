//########################################## FUNCIÓN EXTERNA ############################################//
function generarIDrandom() {
    
    //-- Variable que almacena el ID aleatorio.
    const id = parseInt(Math.random() * 1000);

    //-- Sacarlo por salida.
    return id;
}
//#######################################################################################################//

//########################################### PUNTO DE UNIÓN ############################################//
module.exports = generarIDrandom;
//#######################################################################################################//