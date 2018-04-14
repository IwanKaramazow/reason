module Test = {
  open Belt;
  open React;

  type a = int;
  type b = string;

  let x = 12;
  let y = 34;
};

module Comments = {
  let z = 1;
  /* comment *without* whitespace interleaved*/
  let ab = 2;

  let add = (a, b) => a + b;

  /* comment *with* multiple newlines above */
  let min = (a, b) => a - b;

  let a = 1; /* trailing comment ok */
  let b = 2;

  /* comment on top */
  let x = 1; /* this comment sits at the end of the line */
  /* wow another one below too */

  let add = Test.x;

  /* this
     is
     a multiline
     comment */
  let minus = (a, b) => a - b;

  /* look
     another
     multi
     line
     comment */
  let vermenigvuldig = (a, b) => a * b;
  /* attach another comment below
        it spreads
        over
        multiple
        line
     */

  type x = {
    a: int /* comment1*/,
    b: string /* comment2 */,
  };
};
