#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "liboracle.h"
#define errquit(m) { perror(m); exit(-1); }
#define CC() { asm volatile ( "int3" );}
static char magic[11] = { 0 };
int main() {
  setvbuf(stdout, NULL, _IONBF, 0);
  setvbuf(stderr, NULL, _IONBF, 0);
  CC();
  memset(magic, '0', sizeof(magic)-1);
  CC();
  if(oracle_connect() < 0) errquit("connect");
  CC();
  if(oracle_reset() < 0)   errquit("reset");
  CC();
  oracle_update(0x3ede7439);
  if(magic[0] == '0') {
    oracle_update(0x73df5e1e);
    if(magic[1] == '0') {
      oracle_update(0x7daf06af);
      if(magic[2] == '0') {
        oracle_update(0x38bdbb48);
        if(magic[3] == '0') {
          oracle_update(0x55f6a04f);
          if(magic[4] == '0') {
            oracle_update(0x7f9305b8);
            if(magic[5] == '0') {
              oracle_update(0x75fd96e6);
              if(magic[6] == '0') {
                oracle_update(0x4bfe82b3);
                if(magic[7] == '0') {
                  oracle_update(0x18d3ea86);
                  if(magic[8] == '0') {
                    oracle_update(0x7b7514aa);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f2fb1c3);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7d73f635);
                  if(magic[8] == '0') {
                    oracle_update(0x7bfcef32);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x757f444e);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x65bb6fb7);
                if(magic[7] == '0') {
                  oracle_update(0x6f9f528d);
                  if(magic[8] == '0') {
                    oracle_update(0x77db22a5);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x178d70ee);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5fffe387);
                  if(magic[8] == '0') {
                    oracle_update(0x7f6a45f2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x17f6a669);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x533f6fbe);
              if(magic[6] == '0') {
                oracle_update(0x4bbf436b);
                if(magic[7] == '0') {
                  oracle_update(0x7f1f0377);
                  if(magic[8] == '0') {
                    oracle_update(0x7f5aa7d7);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6f3f3d9e);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f09d23b);
                  if(magic[8] == '0') {
                    oracle_update(0x1ef3d74a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x357f302e);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x75eb2789);
                if(magic[7] == '0') {
                  oracle_update(0x7b71c775);
                  if(magic[8] == '0') {
                    oracle_update(0x6bfb7c8a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4f9f9fe2);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x47dd66e2);
                  if(magic[8] == '0') {
                    oracle_update(0x5f7cdf31);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3ffdcfad);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x2ddfdb81);
            if(magic[5] == '0') {
              oracle_update(0x5f7f2ea8);
              if(magic[6] == '0') {
                oracle_update(0x7fffe3a7);
                if(magic[7] == '0') {
                  oracle_update(0x3fff97ed);
                  if(magic[8] == '0') {
                    oracle_update(0x73fc95c7);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4bf77f4c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6ffad5f4);
                  if(magic[8] == '0') {
                    oracle_update(0x26fe31e1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x439afb4c);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7efd66b4);
                if(magic[7] == '0') {
                  oracle_update(0x7d3fd74b);
                  if(magic[8] == '0') {
                    oracle_update(0x7dd75922);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6dbe6bb1);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3b6f94ff);
                  if(magic[8] == '0') {
                    oracle_update(0x3fbf0420);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x73bbfd56);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x56b72b12);
              if(magic[6] == '0') {
                oracle_update(0x79578cbf);
                if(magic[7] == '0') {
                  oracle_update(0x67efd81f);
                  if(magic[8] == '0') {
                    oracle_update(0x7ff7b54a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ff5c899);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3fff69ff);
                  if(magic[8] == '0') {
                    oracle_update(0x2dd56c44);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7aeeb570);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x2f17c5f6);
                if(magic[7] == '0') {
                  oracle_update(0x7fbfa75e);
                  if(magic[8] == '0') {
                    oracle_update(0x6dcf47dd);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x755bc636);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7eedf674);
                  if(magic[8] == '0') {
                    oracle_update(0x6f4f91f3);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x57ff1aeb);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x727ca974);
          if(magic[4] == '0') {
            oracle_update(0x7f373495);
            if(magic[5] == '0') {
              oracle_update(0x236beade);
              if(magic[6] == '0') {
                oracle_update(0x3ffb3954);
                if(magic[7] == '0') {
                  oracle_update(0x31fc6fee);
                  if(magic[8] == '0') {
                    oracle_update(0x77bb1754);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1b77acb4);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6db9f2eb);
                  if(magic[8] == '0') {
                    oracle_update(0x5fbf5dd2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6e5a9dbd);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5cff0330);
                if(magic[7] == '0') {
                  oracle_update(0x677bb926);
                  if(magic[8] == '0') {
                    oracle_update(0x37f4143b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x49ee5609);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x777fcf88);
                  if(magic[8] == '0') {
                    oracle_update(0x5cdb1b89);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x73dfc453);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0xdf3c7bc);
              if(magic[6] == '0') {
                oracle_update(0x17fb6e0d);
                if(magic[7] == '0') {
                  oracle_update(0x3e9e347c);
                  if(magic[8] == '0') {
                    oracle_update(0x5bff8e54);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5ded5d67);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x73e62fce);
                  if(magic[8] == '0') {
                    oracle_update(0x7a9b85b4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bd7e367);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x1fbfb85c);
                if(magic[7] == '0') {
                  oracle_update(0x7fff6911);
                  if(magic[8] == '0') {
                    oracle_update(0x7fbb682a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x299ff4a1);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x76b238e7);
                  if(magic[8] == '0') {
                    oracle_update(0x7f1d3f82);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1fef21d7);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x4f9fc764);
            if(magic[5] == '0') {
              oracle_update(0x7de9c93a);
              if(magic[6] == '0') {
                oracle_update(0x7d629553);
                if(magic[7] == '0') {
                  oracle_update(0x24fe46a2);
                  if(magic[8] == '0') {
                    oracle_update(0x77d7a9c3);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4ffda00c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3fff5628);
                  if(magic[8] == '0') {
                    oracle_update(0x779f768c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3dddbe8a);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7d7dc02c);
                if(magic[7] == '0') {
                  oracle_update(0x5dffa046);
                  if(magic[8] == '0') {
                    oracle_update(0x4be74738);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x76d7a323);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6bef85d1);
                  if(magic[8] == '0') {
                    oracle_update(0x7ee567f2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x777e3394);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7974a895);
              if(magic[6] == '0') {
                oracle_update(0x7ffdd9e1);
                if(magic[7] == '0') {
                  oracle_update(0x7d670061);
                  if(magic[8] == '0') {
                    oracle_update(0x776ff462);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7afff0e0);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6fdde609);
                  if(magic[8] == '0') {
                    oracle_update(0x7b77a3d3);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5e5747a9);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x77ee726b);
                if(magic[7] == '0') {
                  oracle_update(0x77bf5abd);
                  if(magic[8] == '0') {
                    oracle_update(0x4bff7de5);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7c4f061a);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7dff39a3);
                  if(magic[8] == '0') {
                    oracle_update(0x3f774bd6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x27f1143e);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      } else {
        oracle_update(0x6fffa94a);
        if(magic[3] == '0') {
          oracle_update(0x7eefdd7e);
          if(magic[4] == '0') {
            oracle_update(0x6c7e073a);
            if(magic[5] == '0') {
              oracle_update(0x74f9019e);
              if(magic[6] == '0') {
                oracle_update(0x5d9e1ad7);
                if(magic[7] == '0') {
                  oracle_update(0x7affc926);
                  if(magic[8] == '0') {
                    oracle_update(0x7fb9f67d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77cafd2f);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6eff8d27);
                  if(magic[8] == '0') {
                    oracle_update(0x6fdef214);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3bb9f7d1);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6eb61cb2);
                if(magic[7] == '0') {
                  oracle_update(0x66ef0302);
                  if(magic[8] == '0') {
                    oracle_update(0x3d7ed04c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1aff9c0d);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ffc3eeb);
                  if(magic[8] == '0') {
                    oracle_update(0x7a7f026a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fa12e85);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7fde231b);
              if(magic[6] == '0') {
                oracle_update(0x5e7682ed);
                if(magic[7] == '0') {
                  oracle_update(0x777efe74);
                  if(magic[8] == '0') {
                    oracle_update(0x7fcd609c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5f7d70e4);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fbd3370);
                  if(magic[8] == '0') {
                    oracle_update(0xe7ff3ad);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bdf106c);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6d3f4c7e);
                if(magic[7] == '0') {
                  oracle_update(0x67ad056a);
                  if(magic[8] == '0') {
                    oracle_update(0x7ff3f4d7);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x16862efa);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7e576884);
                  if(magic[8] == '0') {
                    oracle_update(0x49ff3e78);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5b3e3646);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x3bcf2d50);
            if(magic[5] == '0') {
              oracle_update(0x22af87b3);
              if(magic[6] == '0') {
                oracle_update(0x77b702e0);
                if(magic[7] == '0') {
                  oracle_update(0x5c3d7b32);
                  if(magic[8] == '0') {
                    oracle_update(0x3cf7f782);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x337fa1ff);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3efd69fa);
                  if(magic[8] == '0') {
                    oracle_update(0x7bd6ef2e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5dd922e2);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x3b3a5fe8);
                if(magic[7] == '0') {
                  oracle_update(0x3ffba9d3);
                  if(magic[8] == '0') {
                    oracle_update(0x7f7f34c5);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3ffff7b9);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fff93de);
                  if(magic[8] == '0') {
                    oracle_update(0x37f48e90);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x373e2dfd);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7fef8df1);
              if(magic[6] == '0') {
                oracle_update(0x2fbfdc47);
                if(magic[7] == '0') {
                  oracle_update(0x7bb7df9b);
                  if(magic[8] == '0') {
                    oracle_update(0x6fbd45a4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5fe5f39c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x79e851f4);
                  if(magic[8] == '0') {
                    oracle_update(0x3fd1576e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x67afaae3);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7dfe4b4a);
                if(magic[7] == '0') {
                  oracle_update(0x7a5c5665);
                  if(magic[8] == '0') {
                    oracle_update(0x4ccd1a8f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5bff8cf2);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6bbd0504);
                  if(magic[8] == '0') {
                    oracle_update(0x7b3f1d15);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x47788dfd);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x7fcfab1d);
          if(magic[4] == '0') {
            oracle_update(0x1fadefa3);
            if(magic[5] == '0') {
              oracle_update(0x7ff39e2f);
              if(magic[6] == '0') {
                oracle_update(0x7f9b825d);
                if(magic[7] == '0') {
                  oracle_update(0x1fceb827);
                  if(magic[8] == '0') {
                    oracle_update(0x74d9f6ae);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2ffffe2e);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5b2ea1d9);
                  if(magic[8] == '0') {
                    oracle_update(0x67fec9cd);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6dd3a557);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x4fff1bf5);
                if(magic[7] == '0') {
                  oracle_update(0x7b6beedc);
                  if(magic[8] == '0') {
                    oracle_update(0x7f9be000);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7d3235c3);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x61f6f2a7);
                  if(magic[8] == '0') {
                    oracle_update(0x6ffbc34e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fd85dbe);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x1caab94e);
              if(magic[6] == '0') {
                oracle_update(0x7b7bea31);
                if(magic[7] == '0') {
                  oracle_update(0x7d794f7d);
                  if(magic[8] == '0') {
                    oracle_update(0xef202a1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x717f4243);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x67b754d5);
                  if(magic[8] == '0') {
                    oracle_update(0x5fbf5563);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f67a654);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x567de9cd);
                if(magic[7] == '0') {
                  oracle_update(0x5eff926e);
                  if(magic[8] == '0') {
                    oracle_update(0x6ffbc704);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3befc8fa);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3ddda0f4);
                  if(magic[8] == '0') {
                    oracle_update(0x6cdff67e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5ff7f8b2);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x775bdb68);
            if(magic[5] == '0') {
              oracle_update(0x7feed7ad);
              if(magic[6] == '0') {
                oracle_update(0x7fc7c462);
                if(magic[7] == '0') {
                  oracle_update(0x1ff97c05);
                  if(magic[8] == '0') {
                    oracle_update(0x7faf86f4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ef2d309);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3aee291a);
                  if(magic[8] == '0') {
                    oracle_update(0x55db17f1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7b704f54);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7bffee36);
                if(magic[7] == '0') {
                  oracle_update(0x7dd9fab9);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffe1570);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x15b76683);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3cfcd00e);
                  if(magic[8] == '0') {
                    oracle_update(0x58bee8d7);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x455de1b1);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x78ffc2ed);
              if(magic[6] == '0') {
                oracle_update(0x7fef60bd);
                if(magic[7] == '0') {
                  oracle_update(0x7bd536e0);
                  if(magic[8] == '0') {
                    oracle_update(0x7b78159b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3fff4587);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x26ba14ac);
                  if(magic[8] == '0') {
                    oracle_update(0x6bff111b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ffbdaf2);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x79e5fad8);
                if(magic[7] == '0') {
                  oracle_update(0xfffad9a);
                  if(magic[8] == '0') {
                    oracle_update(0x5d2f1f21);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7beebc3a);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3ff1acd2);
                  if(magic[8] == '0') {
                    oracle_update(0x7de8fae4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77fd02cc);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      }
    } else {
      oracle_update(0x7ffed57f);
      if(magic[2] == '0') {
        oracle_update(0x7f71d05f);
        if(magic[3] == '0') {
          oracle_update(0x762d77e1);
          if(magic[4] == '0') {
            oracle_update(0x7edf48a0);
            if(magic[5] == '0') {
              oracle_update(0x7e978bb6);
              if(magic[6] == '0') {
                oracle_update(0x7bf542c3);
                if(magic[7] == '0') {
                  oracle_update(0x6de3abdd);
                  if(magic[8] == '0') {
                    oracle_update(0x41fcabcc);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x55ffd299);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x4fef20ea);
                  if(magic[8] == '0') {
                    oracle_update(0x53ff4e35);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3deebbb0);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x1f8bd9d7);
                if(magic[7] == '0') {
                  oracle_update(0x5efb2f6f);
                  if(magic[8] == '0') {
                    oracle_update(0x7ba5a705);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3bf33c64);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x779b8809);
                  if(magic[8] == '0') {
                    oracle_update(0xfdfe674);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5f7f7b55);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x73ffcbf2);
              if(magic[6] == '0') {
                oracle_update(0x67fb5bc5);
                if(magic[7] == '0') {
                  oracle_update(0x7fed39a9);
                  if(magic[8] == '0') {
                    oracle_update(0x7fdf4209);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x46fd670e);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ffed3d4);
                  if(magic[8] == '0') {
                    oracle_update(0x57b5acb8);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f662b45);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x365f2c44);
                if(magic[7] == '0') {
                  oracle_update(0x4fdd9a38);
                  if(magic[8] == '0') {
                    oracle_update(0x6bfbe5ed);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fffe17a);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7dddd9b9);
                  if(magic[8] == '0') {
                    oracle_update(0x6edd9c6b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f6762a9);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x6ef7c8f3);
            if(magic[5] == '0') {
              oracle_update(0x7fff4952);
              if(magic[6] == '0') {
                oracle_update(0x5ee5d988);
                if(magic[7] == '0') {
                  oracle_update(0x5fff7fb6);
                  if(magic[8] == '0') {
                    oracle_update(0x7cffba1c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x37f20bf5);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6adb3c16);
                  if(magic[8] == '0') {
                    oracle_update(0x2ef55730);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x47f56bf7);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6e6cee44);
                if(magic[7] == '0') {
                  oracle_update(0x7e6fbfcb);
                  if(magic[8] == '0') {
                    oracle_update(0x7f77e9d8);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2e5f8e13);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3e3f54c3);
                  if(magic[8] == '0') {
                    oracle_update(0x7dcec670);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6befcc5c);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x773dbdbe);
              if(magic[6] == '0') {
                oracle_update(0x75efb20a);
                if(magic[7] == '0') {
                  oracle_update(0x76af2e27);
                  if(magic[8] == '0') {
                    oracle_update(0x1b7dca45);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bfb5b9e);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7def83f2);
                  if(magic[8] == '0') {
                    oracle_update(0x76ff756b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4fe742d8);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x3f9fcb6b);
                if(magic[7] == '0') {
                  oracle_update(0x7bcd8320);
                  if(magic[8] == '0') {
                    oracle_update(0x5f786e62);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x66de3c29);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x36dd4183);
                  if(magic[8] == '0') {
                    oracle_update(0x3afd0898);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3ff65305);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x2f9ef1e5);
          if(magic[4] == '0') {
            oracle_update(0x7f7b03a6);
            if(magic[5] == '0') {
              oracle_update(0x3f7b8376);
              if(magic[6] == '0') {
                oracle_update(0x7f6f8809);
                if(magic[7] == '0') {
                  oracle_update(0x2eff7f6f);
                  if(magic[8] == '0') {
                    oracle_update(0x5fbfd414);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5fffcb06);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x777dc9b6);
                  if(magic[8] == '0') {
                    oracle_update(0x7f6d26a0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x76fd297b);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x676a24d3);
                if(magic[7] == '0') {
                  oracle_update(0x2ede75ff);
                  if(magic[8] == '0') {
                    oracle_update(0x327edf58);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fdee0c5);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fbf2dca);
                  if(magic[8] == '0') {
                    oracle_update(0x2fcec0f6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7d37ae41);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x1f7b599a);
              if(magic[6] == '0') {
                oracle_update(0x7a7fbbb1);
                if(magic[7] == '0') {
                  oracle_update(0x2fbd2e9e);
                  if(magic[8] == '0') {
                    oracle_update(0x5f3ce08b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x59e3023a);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x75be7bc1);
                  if(magic[8] == '0') {
                    oracle_update(0x77f690c3);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4d73b14e);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6ff3f1c0);
                if(magic[7] == '0') {
                  oracle_update(0x5dd77666);
                  if(magic[8] == '0') {
                    oracle_update(0x7f7e6964);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6f7f09f3);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7d7fdf13);
                  if(magic[8] == '0') {
                    oracle_update(0x75fd8c49);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ff834b1);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x5f7f3c24);
            if(magic[5] == '0') {
              oracle_update(0x6db305af);
              if(magic[6] == '0') {
                oracle_update(0x4416b89a);
                if(magic[7] == '0') {
                  oracle_update(0x7ebe584d);
                  if(magic[8] == '0') {
                    oracle_update(0x60febbf3);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fb78ba3);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x1ffa708b);
                  if(magic[8] == '0') {
                    oracle_update(0x76ff36b4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x35fef30b);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5fff1e57);
                if(magic[7] == '0') {
                  oracle_update(0x1e5f274e);
                  if(magic[8] == '0') {
                    oracle_update(0x5efe6cac);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bd8bbd4);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x75cf0ec4);
                  if(magic[8] == '0') {
                    oracle_update(0x2ff680f1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6a1db8de);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x2e3fc109);
              if(magic[6] == '0') {
                oracle_update(0x5b774097);
                if(magic[7] == '0') {
                  oracle_update(0x75fd2ebe);
                  if(magic[8] == '0') {
                    oracle_update(0x7bfd73f5);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f19b773);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x52f73137);
                  if(magic[8] == '0') {
                    oracle_update(0x7fbb002a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x79d303df);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x3d7f94ec);
                if(magic[7] == '0') {
                  oracle_update(0x73ffc37a);
                  if(magic[8] == '0') {
                    oracle_update(0x698f5639);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3ff7db8b);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x72bee0dc);
                  if(magic[8] == '0') {
                    oracle_update(0x7ff76acb);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x393e42e1);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      } else {
        oracle_update(0x736b0264);
        if(magic[3] == '0') {
          oracle_update(0x1bfb8c73);
          if(magic[4] == '0') {
            oracle_update(0x5cef4a82);
            if(magic[5] == '0') {
              oracle_update(0x7f7f7c41);
              if(magic[6] == '0') {
                oracle_update(0x5b7b30b9);
                if(magic[7] == '0') {
                  oracle_update(0x46ffd527);
                  if(magic[8] == '0') {
                    oracle_update(0x2fbe0ff3);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ed40951);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fd3f1c7);
                  if(magic[8] == '0') {
                    oracle_update(0x7ef783a2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f7d5cb3);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6ee3490a);
                if(magic[7] == '0') {
                  oracle_update(0x5faffc52);
                  if(magic[8] == '0') {
                    oracle_update(0x79ded02d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5cd71df0);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x1ffefad0);
                  if(magic[8] == '0') {
                    oracle_update(0x55fe829c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x57efb29b);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x673f29d4);
              if(magic[6] == '0') {
                oracle_update(0x5cfe9518);
                if(magic[7] == '0') {
                  oracle_update(0x2ff92130);
                  if(magic[8] == '0') {
                    oracle_update(0x76d391e7);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6b1ffb4b);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fbff3c6);
                  if(magic[8] == '0') {
                    oracle_update(0x733fd2d1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7febfba0);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7f6eeb23);
                if(magic[7] == '0') {
                  oracle_update(0x37ffcc0b);
                  if(magic[8] == '0') {
                    oracle_update(0x7d3e0cfc);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x57fb0b8d);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5efb8db3);
                  if(magic[8] == '0') {
                    oracle_update(0x77e7e767);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5eef9e85);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x55de63b3);
            if(magic[5] == '0') {
              oracle_update(0x3bfd12f0);
              if(magic[6] == '0') {
                oracle_update(0x6ebe017a);
                if(magic[7] == '0') {
                  oracle_update(0x6c78ee03);
                  if(magic[8] == '0') {
                    oracle_update(0x77fb1cf2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x37de3e01);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7eff3c70);
                  if(magic[8] == '0') {
                    oracle_update(0x3394a433);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1afe90e2);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7d7f2470);
                if(magic[7] == '0') {
                  oracle_update(0x7df7c38d);
                  if(magic[8] == '0') {
                    oracle_update(0x7f6db33b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ff7c57e);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5f376ac7);
                  if(magic[8] == '0') {
                    oracle_update(0x3fde85a2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7e9e2c6a);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x77ff6ee8);
              if(magic[6] == '0') {
                oracle_update(0x3fb712f6);
                if(magic[7] == '0') {
                  oracle_update(0x7a7fddeb);
                  if(magic[8] == '0') {
                    oracle_update(0x7f8fe229);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x27ffa99b);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3bfea42a);
                  if(magic[8] == '0') {
                    oracle_update(0x7efb26df);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3fbede04);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6fdbe7ec);
                if(magic[7] == '0') {
                  oracle_update(0x79760eb8);
                  if(magic[8] == '0') {
                    oracle_update(0x3fdf7c67);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x79feaba3);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x25fee44f);
                  if(magic[8] == '0') {
                    oracle_update(0x77cf3800);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5ae95b29);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x3fdb3903);
          if(magic[4] == '0') {
            oracle_update(0x4fc76b1b);
            if(magic[5] == '0') {
              oracle_update(0x39af3868);
              if(magic[6] == '0') {
                oracle_update(0x3fffd73b);
                if(magic[7] == '0') {
                  oracle_update(0x7bfd2f98);
                  if(magic[8] == '0') {
                    oracle_update(0x7df7f1ff);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3d3ff587);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x779f2f07);
                  if(magic[8] == '0') {
                    oracle_update(0x1fbb33df);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7e7a0a92);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x1ebf0d3a);
                if(magic[7] == '0') {
                  oracle_update(0x7ffaf5a9);
                  if(magic[8] == '0') {
                    oracle_update(0x775f353d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x539d1cf3);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x39f756da);
                  if(magic[8] == '0') {
                    oracle_update(0x7aff482a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4bddd268);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x2afffec0);
              if(magic[6] == '0') {
                oracle_update(0x37fc1b60);
                if(magic[7] == '0') {
                  oracle_update(0x37fba068);
                  if(magic[8] == '0') {
                    oracle_update(0x7bff7112);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7e6fdf4d);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6afcae70);
                  if(magic[8] == '0') {
                    oracle_update(0x17ff2140);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f53cbcc);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7eff1300);
                if(magic[7] == '0') {
                  oracle_update(0x6dff1d7a);
                  if(magic[8] == '0') {
                    oracle_update(0x1ff7a6e4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f6f0176);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f6490cb);
                  if(magic[8] == '0') {
                    oracle_update(0x7ff4c198);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5fb333d7);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x4a3d645a);
            if(magic[5] == '0') {
              oracle_update(0x3b1ea0b4);
              if(magic[6] == '0') {
                oracle_update(0x57fbdef0);
                if(magic[7] == '0') {
                  oracle_update(0x3f7f3a63);
                  if(magic[8] == '0') {
                    oracle_update(0x37fff5cb);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3dff49c9);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6dbf20cf);
                  if(magic[8] == '0') {
                    oracle_update(0x3dabafc9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x55db10c5);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x35d8ed51);
                if(magic[7] == '0') {
                  oracle_update(0x7df41870);
                  if(magic[8] == '0') {
                    oracle_update(0x7f26246b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2fb89fe5);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5ffff03c);
                  if(magic[8] == '0') {
                    oracle_update(0x6fff7715);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bff96e9);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x61fe7ea9);
              if(magic[6] == '0') {
                oracle_update(0x7faf4a87);
                if(magic[7] == '0') {
                  oracle_update(0x7f7c2795);
                  if(magic[8] == '0') {
                    oracle_update(0x782fee51);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77bf8018);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x166797c2);
                  if(magic[8] == '0') {
                    oracle_update(0xfd93389);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5bf5ad39);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0xffda2e1);
                if(magic[7] == '0') {
                  oracle_update(0x7eef196c);
                  if(magic[8] == '0') {
                    oracle_update(0x5aedc354);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fefb951);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7e131a2e);
                  if(magic[8] == '0') {
                    oracle_update(0x5eff0b4f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f2f3883);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    oracle_update(0x5f630553);
    if(magic[1] == '0') {
      oracle_update(0x2fb708f8);
      if(magic[2] == '0') {
        oracle_update(0x1dbfe822);
        if(magic[3] == '0') {
          oracle_update(0x67ff0478);
          if(magic[4] == '0') {
            oracle_update(0x74f7c5dc);
            if(magic[5] == '0') {
              oracle_update(0x2c6af45a);
              if(magic[6] == '0') {
                oracle_update(0x7b51f100);
                if(magic[7] == '0') {
                  oracle_update(0x59175228);
                  if(magic[8] == '0') {
                    oracle_update(0x177b1688);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6efc2ac5);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5f7574ef);
                  if(magic[8] == '0') {
                    oracle_update(0x47d9d6a7);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3fdbab57);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6bfb07bf);
                if(magic[7] == '0') {
                  oracle_update(0x77dd730c);
                  if(magic[8] == '0') {
                    oracle_update(0x7f136943);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6b3c67a9);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5fcb5eab);
                  if(magic[8] == '0') {
                    oracle_update(0x7058bd89);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ed3c880);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x6bbfe6c8);
              if(magic[6] == '0') {
                oracle_update(0x1e9b6139);
                if(magic[7] == '0') {
                  oracle_update(0x7bf4166a);
                  if(magic[8] == '0') {
                    oracle_update(0x6fdf74c9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5abfbb6c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f7b7fe7);
                  if(magic[8] == '0') {
                    oracle_update(0x3afa947d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x68a782bf);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7bebf4b9);
                if(magic[7] == '0') {
                  oracle_update(0x7fef493f);
                  if(magic[8] == '0') {
                    oracle_update(0x77f31755);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3e55dcbe);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x18f33f61);
                  if(magic[8] == '0') {
                    oracle_update(0x77f6293a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77ee23bf);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x3fdf540a);
            if(magic[5] == '0') {
              oracle_update(0x3fbf41a0);
              if(magic[6] == '0') {
                oracle_update(0x76bbcc4a);
                if(magic[7] == '0') {
                  oracle_update(0x57e6dded);
                  if(magic[8] == '0') {
                    oracle_update(0x7ff6978e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6ecc0613);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x62338193);
                  if(magic[8] == '0') {
                    oracle_update(0x6f778a0e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x71ee6949);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x1d6d1638);
                if(magic[7] == '0') {
                  oracle_update(0x76ffebc8);
                  if(magic[8] == '0') {
                    oracle_update(0x73f3fca6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x52ffd3aa);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x73cfecba);
                  if(magic[8] == '0') {
                    oracle_update(0x3abfcf84);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1e2f660a);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x268771dd);
              if(magic[6] == '0') {
                oracle_update(0x7f560904);
                if(magic[7] == '0') {
                  oracle_update(0x1f5d0635);
                  if(magic[8] == '0') {
                    oracle_update(0x7e6ee4c2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x65f7eca0);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3dfc49ab);
                  if(magic[8] == '0') {
                    oracle_update(0x79ea8a1c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fe9d112);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7ffe7a40);
                if(magic[7] == '0') {
                  oracle_update(0x3ff1008d);
                  if(magic[8] == '0') {
                    oracle_update(0x69f3ab71);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7dffc416);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7bff68a5);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffbc312);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6ff7146d);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x777f92ec);
          if(magic[4] == '0') {
            oracle_update(0x7f7dc679);
            if(magic[5] == '0') {
              oracle_update(0x4f5f2a01);
              if(magic[6] == '0') {
                oracle_update(0x6fff0ae4);
                if(magic[7] == '0') {
                  oracle_update(0x73bead0e);
                  if(magic[8] == '0') {
                    oracle_update(0x7ae13659);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5ffdc8d7);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5db79a87);
                  if(magic[8] == '0') {
                    oracle_update(0x5a67cbea);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3722b3b9);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x17fb732c);
                if(magic[7] == '0') {
                  oracle_update(0x3b9fa95e);
                  if(magic[8] == '0') {
                    oracle_update(0x78b30312);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2f6782bf);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7b3a338e);
                  if(magic[8] == '0') {
                    oracle_update(0x5fd6238d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6cee16e4);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x5b7911c8);
              if(magic[6] == '0') {
                oracle_update(0x3e5e8675);
                if(magic[7] == '0') {
                  oracle_update(0x7ff9064e);
                  if(magic[8] == '0') {
                    oracle_update(0xc5f0a41);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4f9f818f);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3775f3ac);
                  if(magic[8] == '0') {
                    oracle_update(0x55ff72e5);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7aff35cf);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x462cfa3e);
                if(magic[7] == '0') {
                  oracle_update(0x7fafc427);
                  if(magic[8] == '0') {
                    oracle_update(0x5ef70072);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x79f7f301);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f4dd330);
                  if(magic[8] == '0') {
                    oracle_update(0x4fece1ba);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3f6f1e25);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x3f7fa6e8);
            if(magic[5] == '0') {
              oracle_update(0x7fb8cda7);
              if(magic[6] == '0') {
                oracle_update(0x6f7db784);
                if(magic[7] == '0') {
                  oracle_update(0x2a9d933e);
                  if(magic[8] == '0') {
                    oracle_update(0x79df21ee);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6efcd87a);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7feb9873);
                  if(magic[8] == '0') {
                    oracle_update(0x6dfb191c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fbbb668);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x779f84ed);
                if(magic[7] == '0') {
                  oracle_update(0x7fe7c692);
                  if(magic[8] == '0') {
                    oracle_update(0x5d6e1396);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x39a7eec5);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x67bd9264);
                  if(magic[8] == '0') {
                    oracle_update(0x777b21f1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x57bb3f73);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x57dd36fe);
              if(magic[6] == '0') {
                oracle_update(0x6a2e69cd);
                if(magic[7] == '0') {
                  oracle_update(0x6cf709a9);
                  if(magic[8] == '0') {
                    oracle_update(0x7d73092e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4533c090);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5f9fec68);
                  if(magic[8] == '0') {
                    oracle_update(0x7e1b13a4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7eff9a69);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x67ee7d4d);
                if(magic[7] == '0') {
                  oracle_update(0x7abf3fe9);
                  if(magic[8] == '0') {
                    oracle_update(0x54dff044);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2fead79a);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x556d5cec);
                  if(magic[8] == '0') {
                    oracle_update(0x5bfe94d8);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77f9ea11);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      } else {
        oracle_update(0x43f6d479);
        if(magic[3] == '0') {
          oracle_update(0x56ff05b1);
          if(magic[4] == '0') {
            oracle_update(0x6fffd4b8);
            if(magic[5] == '0') {
              oracle_update(0x7dffb6f5);
              if(magic[6] == '0') {
                oracle_update(0x5eed13ba);
                if(magic[7] == '0') {
                  oracle_update(0x7eff32a2);
                  if(magic[8] == '0') {
                    oracle_update(0x77c6dcbc);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7aefa49e);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x777f0d12);
                  if(magic[8] == '0') {
                    oracle_update(0x7ddf4ebf);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f3e1207);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x578ee0e6);
                if(magic[7] == '0') {
                  oracle_update(0x5cddf0a6);
                  if(magic[8] == '0') {
                    oracle_update(0x7777942e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ee9979);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ee89bc8);
                  if(magic[8] == '0') {
                    oracle_update(0x7e7f0676);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5aefe252);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x6cdf4dde);
              if(magic[6] == '0') {
                oracle_update(0x7ff777ef);
                if(magic[7] == '0') {
                  oracle_update(0x77f4f416);
                  if(magic[8] == '0') {
                    oracle_update(0x7faf99ee);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fff8bb8);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x1f7f4682);
                  if(magic[8] == '0') {
                    oracle_update(0x3df29941);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3677c1a8);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5de3d7a7);
                if(magic[7] == '0') {
                  oracle_update(0x3d7dc281);
                  if(magic[8] == '0') {
                    oracle_update(0x4bd7b38c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3bdf5b83);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7dbf5a52);
                  if(magic[8] == '0') {
                    oracle_update(0x787d8f03);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5f9fff2b);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x7df86160);
            if(magic[5] == '0') {
              oracle_update(0x4fee1898);
              if(magic[6] == '0') {
                oracle_update(0x773feec9);
                if(magic[7] == '0') {
                  oracle_update(0x75ee6e75);
                  if(magic[8] == '0') {
                    oracle_update(0x6bff081f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2fef6198);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fffd4c6);
                  if(magic[8] == '0') {
                    oracle_update(0x76fffed0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77acb934);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6fdf237a);
                if(magic[7] == '0') {
                  oracle_update(0x3f5777f2);
                  if(magic[8] == '0') {
                    oracle_update(0x36ff746c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x76bf491d);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x77be01ce);
                  if(magic[8] == '0') {
                    oracle_update(0x7fef2b99);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3fef8a87);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7cc77b06);
              if(magic[6] == '0') {
                oracle_update(0x77dfec03);
                if(magic[7] == '0') {
                  oracle_update(0x6fbf433a);
                  if(magic[8] == '0') {
                    oracle_update(0x6da7ce51);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5f7f731a);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ebe8bd2);
                  if(magic[8] == '0') {
                    oracle_update(0x7fda3c60);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3deef117);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5dfad80d);
                if(magic[7] == '0') {
                  oracle_update(0x73ef4343);
                  if(magic[8] == '0') {
                    oracle_update(0x6feece05);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7cba3851);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x68bf701a);
                  if(magic[8] == '0') {
                    oracle_update(0x7dad922e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77fcc8c8);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x357dd68b);
          if(magic[4] == '0') {
            oracle_update(0x567f3a8b);
            if(magic[5] == '0') {
              oracle_update(0x75d7e4fd);
              if(magic[6] == '0') {
                oracle_update(0x7eef2535);
                if(magic[7] == '0') {
                  oracle_update(0x75fde032);
                  if(magic[8] == '0') {
                    oracle_update(0x3e6edb45);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bfbf12c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7dfd51e5);
                  if(magic[8] == '0') {
                    oracle_update(0x5a959e00);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6b6d6d13);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5f3f1d2b);
                if(magic[7] == '0') {
                  oracle_update(0x75fbbdcd);
                  if(magic[8] == '0') {
                    oracle_update(0x327ffd0d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7e3f8d4f);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fbdc7cd);
                  if(magic[8] == '0') {
                    oracle_update(0x7defe1a0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1ff7ee2e);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7df76117);
              if(magic[6] == '0') {
                oracle_update(0x7fbad166);
                if(magic[7] == '0') {
                  oracle_update(0x3fef7d21);
                  if(magic[8] == '0') {
                    oracle_update(0x6ffb2e15);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x67cc1784);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3fdf6a20);
                  if(magic[8] == '0') {
                    oracle_update(0x6af7960a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x59bf5a62);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7fed110f);
                if(magic[7] == '0') {
                  oracle_update(0x3fff2801);
                  if(magic[8] == '0') {
                    oracle_update(0x6d155536);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x12b3c118);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x76779563);
                  if(magic[8] == '0') {
                    oracle_update(0x6f67ca2f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0xbe881b3);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x3ee9b877);
            if(magic[5] == '0') {
              oracle_update(0x57f53b74);
              if(magic[6] == '0') {
                oracle_update(0x5eeafef9);
                if(magic[7] == '0') {
                  oracle_update(0x1e77b738);
                  if(magic[8] == '0') {
                    oracle_update(0x657db441);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7adf7f8a);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6ebfcb7d);
                  if(magic[8] == '0') {
                    oracle_update(0x524d1d40);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fdf64ae);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x57fe8af6);
                if(magic[7] == '0') {
                  oracle_update(0x7fbfd154);
                  if(magic[8] == '0') {
                    oracle_update(0x3f7fa2cf);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7dfe42f4);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fcfb0c6);
                  if(magic[8] == '0') {
                    oracle_update(0x757f09d4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f6e3461);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7fedb21b);
              if(magic[6] == '0') {
                oracle_update(0x6aeebdcb);
                if(magic[7] == '0') {
                  oracle_update(0x17afbb81);
                  if(magic[8] == '0') {
                    oracle_update(0x37fe926a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5befa260);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ddd97b1);
                  if(magic[8] == '0') {
                    oracle_update(0x68f75482);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7cee8c84);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7877c393);
                if(magic[7] == '0') {
                  oracle_update(0x7fd52557);
                  if(magic[8] == '0') {
                    oracle_update(0x69b88f76);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4fbf911d);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x4fdf74aa);
                  if(magic[8] == '0') {
                    oracle_update(0x5fbdd77d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x56d6ff1a);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      }
    } else {
      oracle_update(0x1bdf4475);
      if(magic[2] == '0') {
        oracle_update(0xff7ad7f);
        if(magic[3] == '0') {
          oracle_update(0x2fdf5947);
          if(magic[4] == '0') {
            oracle_update(0x2b7bab1d);
            if(magic[5] == '0') {
              oracle_update(0x7ffe2a5c);
              if(magic[6] == '0') {
                oracle_update(0x5bed8d50);
                if(magic[7] == '0') {
                  oracle_update(0x7dff84f8);
                  if(magic[8] == '0') {
                    oracle_update(0x5ffe85b0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ef7de00);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x46bcd662);
                  if(magic[8] == '0') {
                    oracle_update(0x26f76b43);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7eaebd3d);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x357f4678);
                if(magic[7] == '0') {
                  oracle_update(0x5af7b43d);
                  if(magic[8] == '0') {
                    oracle_update(0x6e5f34ac);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x46f79281);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ef7f4a8);
                  if(magic[8] == '0') {
                    oracle_update(0x3e8d3153);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6ffb766b);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x5eef6d7b);
              if(magic[6] == '0') {
                oracle_update(0x7d3f7a1a);
                if(magic[7] == '0') {
                  oracle_update(0x39dfac7f);
                  if(magic[8] == '0') {
                    oracle_update(0x4bff12c9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bebec32);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5fff7102);
                  if(magic[8] == '0') {
                    oracle_update(0x6f4f158d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x79bf1103);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x1f9f4979);
                if(magic[7] == '0') {
                  oracle_update(0x74a9233b);
                  if(magic[8] == '0') {
                    oracle_update(0x6ddbc653);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ba1fea9);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x77f6af7);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffbb4f1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7def298f);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x6fead17d);
            if(magic[5] == '0') {
              oracle_update(0x7fff3d6a);
              if(magic[6] == '0') {
                oracle_update(0x79e30bfe);
                if(magic[7] == '0') {
                  oracle_update(0x5fff708e);
                  if(magic[8] == '0') {
                    oracle_update(0x3bf17c68);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x27dfdd91);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3677099f);
                  if(magic[8] == '0') {
                    oracle_update(0x6fab4a3e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bfff5bd);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x3dff60b1);
                if(magic[7] == '0') {
                  oracle_update(0x51f603c0);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffa9b00);
                    oracle_get_flag();
                  } else {
                    oracle_update(0xfffbd6b);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fed5670);
                  if(magic[8] == '0') {
                    oracle_update(0x4c7e4f22);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x37f79011);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x5ffd3114);
              if(magic[6] == '0') {
                oracle_update(0x78f60aae);
                if(magic[7] == '0') {
                  oracle_update(0x3f53f6fe);
                  if(magic[8] == '0') {
                    oracle_update(0x75fb4ca1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7dffc936);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7e65be07);
                  if(magic[8] == '0') {
                    oracle_update(0x63eff4fa);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f3d0732);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x78bfeee9);
                if(magic[7] == '0') {
                  oracle_update(0x7ff5f5ed);
                  if(magic[8] == '0') {
                    oracle_update(0x7fdd7c5a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x45df591e);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x33f921de);
                  if(magic[8] == '0') {
                    oracle_update(0x77ef039f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3aff6bed);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x2f3c997a);
          if(magic[4] == '0') {
            oracle_update(0x7ee720e8);
            if(magic[5] == '0') {
              oracle_update(0x67efaad0);
              if(magic[6] == '0') {
                oracle_update(0x2ff783f8);
                if(magic[7] == '0') {
                  oracle_update(0x7aedf941);
                  if(magic[8] == '0') {
                    oracle_update(0x68af8a3d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x797f67b3);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7a55bdaa);
                  if(magic[8] == '0') {
                    oracle_update(0x77ffe44e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f7a5366);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0xd75db8d);
                if(magic[7] == '0') {
                  oracle_update(0x7dff9671);
                  if(magic[8] == '0') {
                    oracle_update(0x7f5fe5af);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x37f74ba2);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3f53dede);
                  if(magic[8] == '0') {
                    oracle_update(0x35df44a8);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5bf596bc);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x5fdc971c);
              if(magic[6] == '0') {
                oracle_update(0x577e237e);
                if(magic[7] == '0') {
                  oracle_update(0x43f6111a);
                  if(magic[8] == '0') {
                    oracle_update(0x55f957f7);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ffff378);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6fe21771);
                  if(magic[8] == '0') {
                    oracle_update(0x4efd3a2c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7faf083f);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7ebdde49);
                if(magic[7] == '0') {
                  oracle_update(0x3d775645);
                  if(magic[8] == '0') {
                    oracle_update(0x368e0086);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x61dde7d2);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x177d0eca);
                  if(magic[8] == '0') {
                    oracle_update(0x7efe40b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5ff7842d);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0xdad0bb0);
            if(magic[5] == '0') {
              oracle_update(0x79fc15ad);
              if(magic[6] == '0') {
                oracle_update(0x3ef78299);
                if(magic[7] == '0') {
                  oracle_update(0x76d7b8de);
                  if(magic[8] == '0') {
                    oracle_update(0x7f799d3f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6be642c4);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3dfd08b6);
                  if(magic[8] == '0') {
                    oracle_update(0x63bd4950);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5e7a00db);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6d3f8b3d);
                if(magic[7] == '0') {
                  oracle_update(0x3d9fd2ce);
                  if(magic[8] == '0') {
                    oracle_update(0x3fa7a6fc);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6e7f63d1);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5ff77be0);
                  if(magic[8] == '0') {
                    oracle_update(0x6bae2832);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bbf7ced);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x6f5ec261);
              if(magic[6] == '0') {
                oracle_update(0x4af47183);
                if(magic[7] == '0') {
                  oracle_update(0x6bfc4d48);
                  if(magic[8] == '0') {
                    oracle_update(0x537b5a80);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7dfecd1b);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ff7e621);
                  if(magic[8] == '0') {
                    oracle_update(0x3ffd6b11);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x757e4b33);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7ed911e9);
                if(magic[7] == '0') {
                  oracle_update(0x43f76c99);
                  if(magic[8] == '0') {
                    oracle_update(0x6bbf36b7);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x37556fbd);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5a97be1a);
                  if(magic[8] == '0') {
                    oracle_update(0x3edf86c5);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x73ff890c);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      } else {
        oracle_update(0x75f6fc02);
        if(magic[3] == '0') {
          oracle_update(0x1efe3cc4);
          if(magic[4] == '0') {
            oracle_update(0x7f6fe340);
            if(magic[5] == '0') {
              oracle_update(0x7efe2eec);
              if(magic[6] == '0') {
                oracle_update(0x7ed3f34b);
                if(magic[7] == '0') {
                  oracle_update(0x6dfa0041);
                  if(magic[8] == '0') {
                    oracle_update(0x750cdfca);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5bfaa591);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7bdf1359);
                  if(magic[8] == '0') {
                    oracle_update(0x29be61fb);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ffd581a);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7af30412);
                if(magic[7] == '0') {
                  oracle_update(0x76bb2e16);
                  if(magic[8] == '0') {
                    oracle_update(0x3af7f2eb);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3bfdf49b);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x77ffd9a2);
                  if(magic[8] == '0') {
                    oracle_update(0x5b9db67a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x79ba9b46);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x54ff9688);
              if(magic[6] == '0') {
                oracle_update(0x6fef7681);
                if(magic[7] == '0') {
                  oracle_update(0x7f7a4217);
                  if(magic[8] == '0') {
                    oracle_update(0x58fae1ee);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7effa5a7);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7d1d7386);
                  if(magic[8] == '0') {
                    oracle_update(0x6cff3dbb);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77ffb897);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x4dadd648);
                if(magic[7] == '0') {
                  oracle_update(0x38df737d);
                  if(magic[8] == '0') {
                    oracle_update(0x7ff323df);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7dfd8f36);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7b505f30);
                  if(magic[8] == '0') {
                    oracle_update(0x2bf71c3e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x58e3cea9);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x7fe7f2b1);
            if(magic[5] == '0') {
              oracle_update(0x57f5cd05);
              if(magic[6] == '0') {
                oracle_update(0x37bdba80);
                if(magic[7] == '0') {
                  oracle_update(0x3efb9ab9);
                  if(magic[8] == '0') {
                    oracle_update(0x7f2ee412);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x753f2522);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x77eee8f9);
                  if(magic[8] == '0') {
                    oracle_update(0x573d1aa8);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f7f4f04);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x37fe7a82);
                if(magic[7] == '0') {
                  oracle_update(0x6fc9c70c);
                  if(magic[8] == '0') {
                    oracle_update(0xfff3929);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bbf28b0);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7cff3754);
                  if(magic[8] == '0') {
                    oracle_update(0x6fbbb528);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x73f7009d);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x59df9886);
              if(magic[6] == '0') {
                oracle_update(0x4d2f6fb9);
                if(magic[7] == '0') {
                  oracle_update(0x1cf49ec1);
                  if(magic[8] == '0') {
                    oracle_update(0x5f9f2c58);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7757e416);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3f7e5789);
                  if(magic[8] == '0') {
                    oracle_update(0x7e9f971e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1defde86);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7dfbf512);
                if(magic[7] == '0') {
                  oracle_update(0x1f7a2576);
                  if(magic[8] == '0') {
                    oracle_update(0x7effc501);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6ffc65a3);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x1fe37135);
                  if(magic[8] == '0') {
                    oracle_update(0x75ff85fe);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3c4cdd47);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x1d7ddc5a);
          if(magic[4] == '0') {
            oracle_update(0x7e7faf71);
            if(magic[5] == '0') {
              oracle_update(0x77b78b55);
              if(magic[6] == '0') {
                oracle_update(0x7fbf7580);
                if(magic[7] == '0') {
                  oracle_update(0x7ff79167);
                  if(magic[8] == '0') {
                    oracle_update(0x6a1fa887);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x13f9b01e);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x2fdebc69);
                  if(magic[8] == '0') {
                    oracle_update(0x472f7fa6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f67d0c2);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x54bf4910);
                if(magic[7] == '0') {
                  oracle_update(0x3fff76c6);
                  if(magic[8] == '0') {
                    oracle_update(0x79ef42c2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7df2a872);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x16abfeae);
                  if(magic[8] == '0') {
                    oracle_update(0x77eabd69);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fde8f01);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7bbf37b4);
              if(magic[6] == '0') {
                oracle_update(0x7fffbd3c);
                if(magic[7] == '0') {
                  oracle_update(0x3efd871f);
                  if(magic[8] == '0') {
                    oracle_update(0x6df94f54);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77df53d4);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x73fc513a);
                  if(magic[8] == '0') {
                    oracle_update(0x7e7f0fc4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x727fa171);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x77dbbb76);
                if(magic[7] == '0') {
                  oracle_update(0x7a9ff485);
                  if(magic[8] == '0') {
                    oracle_update(0x56e7a017);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5f7db604);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x32ff26f7);
                  if(magic[8] == '0') {
                    oracle_update(0x6e1e3b60);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1fcf9027);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x5fffbf2e);
            if(magic[5] == '0') {
              oracle_update(0x56edd95d);
              if(magic[6] == '0') {
                oracle_update(0x7ff79098);
                if(magic[7] == '0') {
                  oracle_update(0x7fff1850);
                  if(magic[8] == '0') {
                    oracle_update(0x7be895b4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5d7da717);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3ffffcc6);
                  if(magic[8] == '0') {
                    oracle_update(0x55fb3f68);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77dace2a);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5ef4803a);
                if(magic[7] == '0') {
                  oracle_update(0x7f5c74cb);
                  if(magic[8] == '0') {
                    oracle_update(0x4b6f714c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fdd7a15);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x371bf3b1);
                  if(magic[8] == '0') {
                    oracle_update(0x6eff1fad);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2dd61876);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x69d7f698);
              if(magic[6] == '0') {
                oracle_update(0x3b7b9585);
                if(magic[7] == '0') {
                  oracle_update(0x5ffe5191);
                  if(magic[8] == '0') {
                    oracle_update(0x6f177c2d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f7b5574);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fbe1ee7);
                  if(magic[8] == '0') {
                    oracle_update(0xfff9ea6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77e760b6);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x333600ee);
                if(magic[7] == '0') {
                  oracle_update(0x7f6760de);
                  if(magic[8] == '0') {
                    oracle_update(0x7fbffdf9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ebe64d3);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5b1e9cbe);
                  if(magic[8] == '0') {
                    oracle_update(0x3f7aaa05);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77fb1d42);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  CC();
  printf("Magic evaluated: %s\n", magic);
  CC();
  return 0;
}
