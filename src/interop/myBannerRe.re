/* Typing the myBanner.js component's output as a `reactClass`. */
/* Note that this file's JS output is located at reason-react-example/lib/js/src/interop/myBannerRe.js; we're specifying the relative path to myBanner.js in the string below */
external myBanner : ReactRe.reactClass = "../../../../src/interop/myBanner" [@@bs.module];

let createElement ::show ::message =>
  ReactRe.wrapPropsShamelessly
    myBanner
    {
      "show": Js.Boolean.to_js_boolean show, /* ^ don't forget to convert an OCaml bool into a JS boolean! */
      "message": message /* OCaml string maps to JS string, no conversion needed here */
    };
