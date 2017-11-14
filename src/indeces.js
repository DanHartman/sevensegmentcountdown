module.exports = function(digit, place, library, controller, callback) {
  const indeces = library[digit].map((x) => { return library[place][x].index })
  const pins = library[digit].map((x) => { return library[place][x].pin })
  
  if(controller == "arduino")
  	return callback(null, pins);

  return callback(null, indeces);
}