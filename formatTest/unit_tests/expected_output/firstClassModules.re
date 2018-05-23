module Modifier = (
  val Db.Hashtbl.create()
    : Db.Sig with type t = Mods.t
);
module Modifier = (
  val Db.Hashtbl.create()
    : Db.Sig with type t = Mods.t
);
module Modifier = (
  val Db.Hashtbl.create()
    : Db.Sig with type t = Mods.t
);
module Modifier = (
  val Db.Hashtbl.create()
    : Db.Sig with type t = Mods.t
);
module Modifier = (val Db.Hashtbl.create());
module Modifier = (
  val Db.Hashtbl.create()
    : Db.Sig with
        type t = Mods.t and
        type s = Mods.s and
        type z = Mods.z
);

module Lowercase = (val stuff: lowercase);
module Lowercase = (
  val stuff: Foo.Bar.lowercase
);
module Lowercase = (
  val stuff
    : Foo.Bar.lowercase with type t = Mods.t
);

module T = (
  val (module FirstClass): myLowercaseModule
);

module Three = (val three: X_int);

/* Uppercase identifier makes it clear that this is a package type */
let thing: Thing = (module MyModule);
let thing: Foo.Bar.Thing = (module MyModule);

/* Package types with lowercase identifiers need to be
   wrapped in `(module ...)`, conflicts with a core_type otherwise */
let smallThing: (module lowercase) =
  (module Mod);
let smallThing: (module Foo.Bar.lowercase) =
  (module Mod);

let f = (module Add: S.Z, x) => Add.add(x);

let join_iter =
    (
      type ta,
      type tb,
      module A: Sig with type t = ta,
      module B: Sig with type t = tb,
      module C: Sig with type t = tb,
      module D
        : Sig with
            type t = tb and
            type s = tc and
            type x = td and
            type z = te,
      fn,
    ) =>
  fn(A.value + B.value);
