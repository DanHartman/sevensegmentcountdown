const expect = require('chai').expect;
const indeces = require('../src/indeces.js');
const segments = require('../segments.json');

describe('describe how to illuminate a given digit', () => {
  it('should exist', () => {
    expect(indeces).to.exist;
  });

  it('should return the array indeces to make a zero on the left side', () => {
  	indeces("zero", "left", segments, "jfive", (err, result) => {
  	  expect(result).to.deep.equal([6, 5, 9, 10, 11, 8])	
  	})
  })

  it('should return the array of pins to make a zero on the left side using an arduino', () => {
  	indeces("zero", "left", segments, "arduino", (err, result) => {
  	  expect(result).to.deep.equal([8,7,11,12,13,10])	
  	})
  })
});
