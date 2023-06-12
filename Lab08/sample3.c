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
  oracle_update(0x5ff78b2d);
  if(magic[0] == '0') {
    oracle_update(0x7d7d6948);
    if(magic[1] == '0') {
      oracle_update(0x6fff0fe9);
      if(magic[2] == '0') {
        oracle_update(0x5bfd49e3);
        if(magic[3] == '0') {
          oracle_update(0x7deeb873);
          if(magic[4] == '0') {
            oracle_update(0x3f470edc);
            if(magic[5] == '0') {
              oracle_update(0x3fbfbb7d);
              if(magic[6] == '0') {
                oracle_update(0x6ffe89a0);
                if(magic[7] == '0') {
                  oracle_update(0x3777b395);
                  if(magic[8] == '0') {
                    oracle_update(0x2dfb0796);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7e7722f3);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x4ff5863f);
                  if(magic[8] == '0') {
                    oracle_update(0x7eef7a57);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6bfaf344);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0xf65cff8);
                if(magic[7] == '0') {
                  oracle_update(0x77ff89ab);
                  if(magic[8] == '0') {
                    oracle_update(0x6efd2a92);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fb70284);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7e7a97dc);
                  if(magic[8] == '0') {
                    oracle_update(0x75eb9d0e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fc625c0);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7ecfe55b);
              if(magic[6] == '0') {
                oracle_update(0x52eed276);
                if(magic[7] == '0') {
                  oracle_update(0x78df3eaf);
                  if(magic[8] == '0') {
                    oracle_update(0x72fa7410);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3f9d3b25);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fb915f6);
                  if(magic[8] == '0') {
                    oracle_update(0x7d9782ed);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3f562171);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x73bf41be);
                if(magic[7] == '0') {
                  oracle_update(0x1f9f1203);
                  if(magic[8] == '0') {
                    oracle_update(0x5efa8468);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1d7fa905);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7977611f);
                  if(magic[8] == '0') {
                    oracle_update(0x77bf3d63);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x366ecbdd);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x7fb234fe);
            if(magic[5] == '0') {
              oracle_update(0x3df662e4);
              if(magic[6] == '0') {
                oracle_update(0x6bd7eebf);
                if(magic[7] == '0') {
                  oracle_update(0x5bcbcc2f);
                  if(magic[8] == '0') {
                    oracle_update(0x65fb145d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fffbd88);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x26fdbbbd);
                  if(magic[8] == '0') {
                    oracle_update(0x6eb69a89);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x36feddad);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7f6fced1);
                if(magic[7] == '0') {
                  oracle_update(0x7fed90a5);
                  if(magic[8] == '0') {
                    oracle_update(0x555b6974);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x75b7e9a6);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fbf9050);
                  if(magic[8] == '0') {
                    oracle_update(0x56a7cff7);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4f77795c);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7fdf6e10);
              if(magic[6] == '0') {
                oracle_update(0x7bf7ac31);
                if(magic[7] == '0') {
                  oracle_update(0x7cb2ed97);
                  if(magic[8] == '0') {
                    oracle_update(0x667f47fb);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x34d7b08a);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6fff93f2);
                  if(magic[8] == '0') {
                    oracle_update(0x5fef4297);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x59ff59cb);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7e7b4322);
                if(magic[7] == '0') {
                  oracle_update(0x6b87d3e5);
                  if(magic[8] == '0') {
                    oracle_update(0x6fff6e7b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x76d0eeb3);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6fede9f7);
                  if(magic[8] == '0') {
                    oracle_update(0x2bfe32fa);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bfaf0d7);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x17692741);
          if(magic[4] == '0') {
            oracle_update(0x31df78a0);
            if(magic[5] == '0') {
              oracle_update(0x77ffbbbf);
              if(magic[6] == '0') {
                oracle_update(0x7cff2edd);
                if(magic[7] == '0') {
                  oracle_update(0x4ffbaa0e);
                  if(magic[8] == '0') {
                    oracle_update(0x7f57a961);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f71d60b);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7cf6daeb);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffb5f2c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3bfb0906);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x1f7fd2a4);
                if(magic[7] == '0') {
                  oracle_update(0x37fd6eb0);
                  if(magic[8] == '0') {
                    oracle_update(0x5fbd93e9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fadcf22);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x72cfcbd8);
                  if(magic[8] == '0') {
                    oracle_update(0x6bed0213);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5a7fa7e7);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x6fea5d4d);
              if(magic[6] == '0') {
                oracle_update(0x5f7b0fb4);
                if(magic[7] == '0') {
                  oracle_update(0x7fdfd1f9);
                  if(magic[8] == '0') {
                    oracle_update(0x6adffcff);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5cfd14f7);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x63cec97d);
                  if(magic[8] == '0') {
                    oracle_update(0x3fbf2a6d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fd30696);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x67df9a6d);
                if(magic[7] == '0') {
                  oracle_update(0x77ffdb41);
                  if(magic[8] == '0') {
                    oracle_update(0x5afb7192);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fd944c6);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3ffe3787);
                  if(magic[8] == '0') {
                    oracle_update(0x3eadafda);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3f9debe3);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x77df6498);
            if(magic[5] == '0') {
              oracle_update(0x5fdfef75);
              if(magic[6] == '0') {
                oracle_update(0x7deface1);
                if(magic[7] == '0') {
                  oracle_update(0x77f3318a);
                  if(magic[8] == '0') {
                    oracle_update(0x5b3fe3fd);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fff9d26);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7b4745da);
                  if(magic[8] == '0') {
                    oracle_update(0x6bba75a6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fee0bca);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0xbbdc9e1);
                if(magic[7] == '0') {
                  oracle_update(0x5b3fefe1);
                  if(magic[8] == '0') {
                    oracle_update(0xfcf98d8);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7aff6d6f);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7e2f665f);
                  if(magic[8] == '0') {
                    oracle_update(0x5bff236b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f5fe4fb);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x67b9c13e);
              if(magic[6] == '0') {
                oracle_update(0x77efbc59);
                if(magic[7] == '0') {
                  oracle_update(0x7d7d41fc);
                  if(magic[8] == '0') {
                    oracle_update(0x236f6dc8);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bf26002);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f5dc0f8);
                  if(magic[8] == '0') {
                    oracle_update(0x7fb568b5);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x76ff311d);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5fa7c6b1);
                if(magic[7] == '0') {
                  oracle_update(0x37f95dfa);
                  if(magic[8] == '0') {
                    oracle_update(0x5f6f5be2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7de37ed4);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7eef9d5c);
                  if(magic[8] == '0') {
                    oracle_update(0x2bbeab81);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7abf64f7);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      } else {
        oracle_update(0x59593f5c);
        if(magic[3] == '0') {
          oracle_update(0x73ff22e9);
          if(magic[4] == '0') {
            oracle_update(0x35afbde9);
            if(magic[5] == '0') {
              oracle_update(0x77f3836c);
              if(magic[6] == '0') {
                oracle_update(0x7dfd1948);
                if(magic[7] == '0') {
                  oracle_update(0x3e681b26);
                  if(magic[8] == '0') {
                    oracle_update(0x6f7e2ca6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4f9fd2a8);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x78e73bc1);
                  if(magic[8] == '0') {
                    oracle_update(0x6a4ca849);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5ff7abdc);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x37ed9603);
                if(magic[7] == '0') {
                  oracle_update(0x69ffeb0e);
                  if(magic[8] == '0') {
                    oracle_update(0x59a7b960);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x795fdc0e);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x37db3736);
                  if(magic[8] == '0') {
                    oracle_update(0x7ccb2ea2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x555dfd36);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x3ffd2e13);
              if(magic[6] == '0') {
                oracle_update(0x6ffe0a67);
                if(magic[7] == '0') {
                  oracle_update(0x3f87e967);
                  if(magic[8] == '0') {
                    oracle_update(0x7dfbbafb);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f7b34a0);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7bffa104);
                  if(magic[8] == '0') {
                    oracle_update(0x23b5c3d1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x67fffdf8);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5fc72e45);
                if(magic[7] == '0') {
                  oracle_update(0x56fb2b50);
                  if(magic[8] == '0') {
                    oracle_update(0x7fbbdba1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7cee2b6f);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5beb6c1a);
                  if(magic[8] == '0') {
                    oracle_update(0x4fe6e783);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x177e16a1);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x617fe15c);
            if(magic[5] == '0') {
              oracle_update(0x37fdf659);
              if(magic[6] == '0') {
                oracle_update(0x7dffd6ef);
                if(magic[7] == '0') {
                  oracle_update(0x7cdfcbd0);
                  if(magic[8] == '0') {
                    oracle_update(0x7d7f9284);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fefb676);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x73fd1f09);
                  if(magic[8] == '0') {
                    oracle_update(0x3addc7bc);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x72d67bef);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7dbfa4ca);
                if(magic[7] == '0') {
                  oracle_update(0x3fb9881f);
                  if(magic[8] == '0') {
                    oracle_update(0x3dfc7b9d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ffd5de8);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6ff89929);
                  if(magic[8] == '0') {
                    oracle_update(0x6fed1906);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5bbe46ab);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x73d32d99);
              if(magic[6] == '0') {
                oracle_update(0x43757389);
                if(magic[7] == '0') {
                  oracle_update(0x4f1e7fba);
                  if(magic[8] == '0') {
                    oracle_update(0x5ddab857);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7b4bf7b2);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5babdffd);
                  if(magic[8] == '0') {
                    oracle_update(0x7c69e109);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7def9bdb);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x77ff7fef);
                if(magic[7] == '0') {
                  oracle_update(0x5db50511);
                  if(magic[8] == '0') {
                    oracle_update(0x3fff7276);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fca43cd);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ddde5bd);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffa57b0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7a6e6e23);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x3dbd1193);
          if(magic[4] == '0') {
            oracle_update(0x773bf0b3);
            if(magic[5] == '0') {
              oracle_update(0x66f965e0);
              if(magic[6] == '0') {
                oracle_update(0x22668720);
                if(magic[7] == '0') {
                  oracle_update(0x623ff5a0);
                  if(magic[8] == '0') {
                    oracle_update(0x7ab443b8);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ed92502);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x317faa0e);
                  if(magic[8] == '0') {
                    oracle_update(0x1b7486eb);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x33f98c91);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x76f7f6d8);
                if(magic[7] == '0') {
                  oracle_update(0x7cef2918);
                  if(magic[8] == '0') {
                    oracle_update(0x7ecff8ef);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7afdacc9);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x63469db6);
                  if(magic[8] == '0') {
                    oracle_update(0x3df54597);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x777fe5f7);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x77fe56e0);
              if(magic[6] == '0') {
                oracle_update(0x5fd7186e);
                if(magic[7] == '0') {
                  oracle_update(0x127fe1f7);
                  if(magic[8] == '0') {
                    oracle_update(0x7dfe6ebf);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7dbb7a16);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3ebbd728);
                  if(magic[8] == '0') {
                    oracle_update(0x4fefd354);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x17f70c74);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x17768b82);
                if(magic[7] == '0') {
                  oracle_update(0x3fef1746);
                  if(magic[8] == '0') {
                    oracle_update(0x4dcfdd3b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7c779fc5);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x63ef6a21);
                  if(magic[8] == '0') {
                    oracle_update(0x36feaab0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4de81f20);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x7fff4e71);
            if(magic[5] == '0') {
              oracle_update(0x513b3e45);
              if(magic[6] == '0') {
                oracle_update(0x4d5f1a6e);
                if(magic[7] == '0') {
                  oracle_update(0x7f7ff537);
                  if(magic[8] == '0') {
                    oracle_update(0x6efc3282);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4c26f9dc);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x1d6b9ec7);
                  if(magic[8] == '0') {
                    oracle_update(0x7d6de514);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x76fdbbf6);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x75771d36);
                if(magic[7] == '0') {
                  oracle_update(0x7fff0e93);
                  if(magic[8] == '0') {
                    oracle_update(0x7e7770e6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7dbfeff8);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x37f44772);
                  if(magic[8] == '0') {
                    oracle_update(0x76ff5c33);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x57ffb46c);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x771f1bb8);
              if(magic[6] == '0') {
                oracle_update(0x77c8618a);
                if(magic[7] == '0') {
                  oracle_update(0xffd9212);
                  if(magic[8] == '0') {
                    oracle_update(0x7ff3b39a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7e871abc);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x67756c01);
                  if(magic[8] == '0') {
                    oracle_update(0x7efe4474);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f37ccb9);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x63ea1cc1);
                if(magic[7] == '0') {
                  oracle_update(0x3727a4c9);
                  if(magic[8] == '0') {
                    oracle_update(0x3df27771);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7efe569c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x73feb75b);
                  if(magic[8] == '0') {
                    oracle_update(0x7ef17a67);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x75fc1089);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      }
    } else {
      oracle_update(0x7af965c5);
      if(magic[2] == '0') {
        oracle_update(0x7afee2a3);
        if(magic[3] == '0') {
          oracle_update(0x3af2a80e);
          if(magic[4] == '0') {
            oracle_update(0x766c55df);
            if(magic[5] == '0') {
              oracle_update(0x7bf2135e);
              if(magic[6] == '0') {
                oracle_update(0x7ad27a91);
                if(magic[7] == '0') {
                  oracle_update(0x3f7f733d);
                  if(magic[8] == '0') {
                    oracle_update(0x7dfbb9df);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2a6e6656);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x796d7b19);
                  if(magic[8] == '0') {
                    oracle_update(0x5ffb90d3);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6e6d7cf6);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x33f76690);
                if(magic[7] == '0') {
                  oracle_update(0x5cf542ad);
                  if(magic[8] == '0') {
                    oracle_update(0xffa8b0c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6ceeb838);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5fefaed4);
                  if(magic[8] == '0') {
                    oracle_update(0x677442de);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7de5b233);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x453b2f94);
              if(magic[6] == '0') {
                oracle_update(0x4fb8a87);
                if(magic[7] == '0') {
                  oracle_update(0x3ff7578a);
                  if(magic[8] == '0') {
                    oracle_update(0x767f9b27);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5eef7d67);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x67fd31ec);
                  if(magic[8] == '0') {
                    oracle_update(0x5ffff41f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f31014c);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x17df7e1f);
                if(magic[7] == '0') {
                  oracle_update(0x6efcc93f);
                  if(magic[8] == '0') {
                    oracle_update(0x7fbab69f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x57fb8db2);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7def51e6);
                  if(magic[8] == '0') {
                    oracle_update(0x31bfcda4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5fbbddef);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x7fe41679);
            if(magic[5] == '0') {
              oracle_update(0x7677e0f2);
              if(magic[6] == '0') {
                oracle_update(0x7f7791ed);
                if(magic[7] == '0') {
                  oracle_update(0x3e772538);
                  if(magic[8] == '0') {
                    oracle_update(0x2ff3a8a1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5f652676);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x71bf3bcd);
                  if(magic[8] == '0') {
                    oracle_update(0x3df56692);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x237c3b2f);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x67efe496);
                if(magic[7] == '0') {
                  oracle_update(0x3fdf289d);
                  if(magic[8] == '0') {
                    oracle_update(0x71ff105b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fe7d8df);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3f7fc218);
                  if(magic[8] == '0') {
                    oracle_update(0x737d600b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0xfbf49b2);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7ffd5e02);
              if(magic[6] == '0') {
                oracle_update(0x3dfe0ad5);
                if(magic[7] == '0') {
                  oracle_update(0x3fb2aaaf);
                  if(magic[8] == '0') {
                    oracle_update(0x7bff5801);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4fdbdacf);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3e3f51d4);
                  if(magic[8] == '0') {
                    oracle_update(0x7d7e1139);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fbbb7b0);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7dcfa7dc);
                if(magic[7] == '0') {
                  oracle_update(0x6f797fd8);
                  if(magic[8] == '0') {
                    oracle_update(0x47df3403);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77e6f8de);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6fffe9e3);
                  if(magic[8] == '0') {
                    oracle_update(0x71a7e39e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x76cd892b);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x7fdafba2);
          if(magic[4] == '0') {
            oracle_update(0x5eaf7186);
            if(magic[5] == '0') {
              oracle_update(0x1ffda52f);
              if(magic[6] == '0') {
                oracle_update(0x7df7b718);
                if(magic[7] == '0') {
                  oracle_update(0x7b7f6a99);
                  if(magic[8] == '0') {
                    oracle_update(0x6dff1b13);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2ff5c5b4);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6dfe8f6a);
                  if(magic[8] == '0') {
                    oracle_update(0x4def530e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x11ff7344);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x1eff28ca);
                if(magic[7] == '0') {
                  oracle_update(0x3d5f7dcb);
                  if(magic[8] == '0') {
                    oracle_update(0x7779f44a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5de7b6a2);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7e7fd1eb);
                  if(magic[8] == '0') {
                    oracle_update(0x5d7fd735);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x51dc4f89);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7b5fb040);
              if(magic[6] == '0') {
                oracle_update(0x4fc72ffb);
                if(magic[7] == '0') {
                  oracle_update(0x5fd7c43c);
                  if(magic[8] == '0') {
                    oracle_update(0x7f36c76d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7e7a7b56);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x2ffe4425);
                  if(magic[8] == '0') {
                    oracle_update(0x58e70673);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3f0fa07f);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x3ddf94d6);
                if(magic[7] == '0') {
                  oracle_update(0x3f7b9fe6);
                  if(magic[8] == '0') {
                    oracle_update(0x7bf77869);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5d7f3c1d);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5e9f4bf2);
                  if(magic[8] == '0') {
                    oracle_update(0x7ca7702b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x57ffe847);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x7e779c5d);
            if(magic[5] == '0') {
              oracle_update(0x54e4a06f);
              if(magic[6] == '0') {
                oracle_update(0x6aed09af);
                if(magic[7] == '0') {
                  oracle_update(0x6d3e86b8);
                  if(magic[8] == '0') {
                    oracle_update(0x2f3e74ea);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6dff0ce4);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6ffff8ea);
                  if(magic[8] == '0') {
                    oracle_update(0x5ffdaedf);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x53ea2b61);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x737f2131);
                if(magic[7] == '0') {
                  oracle_update(0x7f7e0afe);
                  if(magic[8] == '0') {
                    oracle_update(0x23fdcc4c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6bf7f77f);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f176a06);
                  if(magic[8] == '0') {
                    oracle_update(0x7febe258);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x471fd2b8);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7bff6aa5);
              if(magic[6] == '0') {
                oracle_update(0x6b7d95f5);
                if(magic[7] == '0') {
                  oracle_update(0x3fffe91c);
                  if(magic[8] == '0') {
                    oracle_update(0x3fff7160);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f1e826c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7bdf0527);
                  if(magic[8] == '0') {
                    oracle_update(0x7fdf8115);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6eefb249);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x3ffbe60b);
                if(magic[7] == '0') {
                  oracle_update(0x7fffc509);
                  if(magic[8] == '0') {
                    oracle_update(0x7bffbc4a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6ef75586);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f4a5c0a);
                  if(magic[8] == '0') {
                    oracle_update(0x7e77b3af);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fddb7b4);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      } else {
        oracle_update(0x7ffac2b6);
        if(magic[3] == '0') {
          oracle_update(0x69ffa352);
          if(magic[4] == '0') {
            oracle_update(0x6f3c90b3);
            if(magic[5] == '0') {
              oracle_update(0x7bfbff1c);
              if(magic[6] == '0') {
                oracle_update(0x7f8ef0b8);
                if(magic[7] == '0') {
                  oracle_update(0x7fa65406);
                  if(magic[8] == '0') {
                    oracle_update(0x7dd9ebc9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x54daf091);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ff7dce9);
                  if(magic[8] == '0') {
                    oracle_update(0x1bfb44c0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5bf63dd1);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x4ddf957f);
                if(magic[7] == '0') {
                  oracle_update(0x7dd329b4);
                  if(magic[8] == '0') {
                    oracle_update(0x5dfffdf6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7579b48e);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x2efea727);
                  if(magic[8] == '0') {
                    oracle_update(0x72de7c59);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4ffe8a13);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x5afab404);
              if(magic[6] == '0') {
                oracle_update(0x7f3fe172);
                if(magic[7] == '0') {
                  oracle_update(0x6df0b2ac);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffad554);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3ee8658d);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7bff7b6b);
                  if(magic[8] == '0') {
                    oracle_update(0x5f7b2f6c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fd74fe9);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x77ffdcb5);
                if(magic[7] == '0') {
                  oracle_update(0x5afe8158);
                  if(magic[8] == '0') {
                    oracle_update(0x7ff7063e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x656f182b);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x675d17b1);
                  if(magic[8] == '0') {
                    oracle_update(0x3dfde33d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fdfe287);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x7ffff171);
            if(magic[5] == '0') {
              oracle_update(0x75fde9f9);
              if(magic[6] == '0') {
                oracle_update(0x7b5f3687);
                if(magic[7] == '0') {
                  oracle_update(0xcf84f1c);
                  if(magic[8] == '0') {
                    oracle_update(0x6f379477);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5b1d69ae);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x379fb766);
                  if(magic[8] == '0') {
                    oracle_update(0x7db8ef0b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fffea44);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x774f78d5);
                if(magic[7] == '0') {
                  oracle_update(0x7fbbcb9d);
                  if(magic[8] == '0') {
                    oracle_update(0x7f09dcd0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5ed3cd4f);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7b6f0fc9);
                  if(magic[8] == '0') {
                    oracle_update(0x596f2618);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x576646e4);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7b9f5c5e);
              if(magic[6] == '0') {
                oracle_update(0x47df25d0);
                if(magic[7] == '0') {
                  oracle_update(0x7ffadd46);
                  if(magic[8] == '0') {
                    oracle_update(0x7b6f63e2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6df151d7);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x77f61daf);
                  if(magic[8] == '0') {
                    oracle_update(0x17cec448);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x29e87f04);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x2cf7d351);
                if(magic[7] == '0') {
                  oracle_update(0x7a5d03fa);
                  if(magic[8] == '0') {
                    oracle_update(0x6bef472f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5f768474);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x79b9d1f2);
                  if(magic[8] == '0') {
                    oracle_update(0x7aed670f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x76fbf972);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x557f9a93);
          if(magic[4] == '0') {
            oracle_update(0x6baf7f67);
            if(magic[5] == '0') {
              oracle_update(0x6fd99829);
              if(magic[6] == '0') {
                oracle_update(0x7cfbbf66);
                if(magic[7] == '0') {
                  oracle_update(0x5951652e);
                  if(magic[8] == '0') {
                    oracle_update(0x7bef3a13);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f6bd4bf);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x2eff29d1);
                  if(magic[8] == '0') {
                    oracle_update(0x6bdf0aa0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3f2b161f);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7c5fac6f);
                if(magic[7] == '0') {
                  oracle_update(0x7ffa5db0);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffc5dd6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6b6f409a);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7cff7cd2);
                  if(magic[8] == '0') {
                    oracle_update(0x73ef3ad1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x577f7f5b);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7bff600b);
              if(magic[6] == '0') {
                oracle_update(0x6f71b068);
                if(magic[7] == '0') {
                  oracle_update(0x555ebc45);
                  if(magic[8] == '0') {
                    oracle_update(0x7fbb33f0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x71733202);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x793f62ef);
                  if(magic[8] == '0') {
                    oracle_update(0x7cbf72f2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x39eec2bf);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x417e39cb);
                if(magic[7] == '0') {
                  oracle_update(0x3dbfbf9b);
                  if(magic[8] == '0') {
                    oracle_update(0x7f264836);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5773e48e);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7bb645ad);
                  if(magic[8] == '0') {
                    oracle_update(0x2fceae2e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5e51aacd);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x5fb7fec6);
            if(magic[5] == '0') {
              oracle_update(0x5fee8858);
              if(magic[6] == '0') {
                oracle_update(0x7f79f353);
                if(magic[7] == '0') {
                  oracle_update(0x2ebe8b3b);
                  if(magic[8] == '0') {
                    oracle_update(0x7bf14121);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fce1160);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f7e68d3);
                  if(magic[8] == '0') {
                    oracle_update(0x7fe53e8f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x277f3332);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7ffc2551);
                if(magic[7] == '0') {
                  oracle_update(0x56d91e80);
                  if(magic[8] == '0') {
                    oracle_update(0x5efd0aee);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fee2054);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ede0b92);
                  if(magic[8] == '0') {
                    oracle_update(0x6dbffb4b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3fffe472);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7fc7d030);
              if(magic[6] == '0') {
                oracle_update(0xbde98ef);
                if(magic[7] == '0') {
                  oracle_update(0x7bff8d8c);
                  if(magic[8] == '0') {
                    oracle_update(0x7fbf70e2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5e7c2773);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6de99e17);
                  if(magic[8] == '0') {
                    oracle_update(0x6bdcc77b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6bfb9df6);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0xbdd99ce);
                if(magic[7] == '0') {
                  oracle_update(0x5186a2fb);
                  if(magic[8] == '0') {
                    oracle_update(0x1ff53165);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2e9fbef7);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x799de986);
                  if(magic[8] == '0') {
                    oracle_update(0x7f976086);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x69ecc7d5);
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
    oracle_update(0x3fbf85dc);
    if(magic[1] == '0') {
      oracle_update(0x7fef189f);
      if(magic[2] == '0') {
        oracle_update(0x5bd7b4df);
        if(magic[3] == '0') {
          oracle_update(0x7db72191);
          if(magic[4] == '0') {
            oracle_update(0x5fdb6135);
            if(magic[5] == '0') {
              oracle_update(0x3ff67cd6);
              if(magic[6] == '0') {
                oracle_update(0x29af57f9);
                if(magic[7] == '0') {
                  oracle_update(0x1b7f1ee5);
                  if(magic[8] == '0') {
                    oracle_update(0x21afe950);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f3fed69);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3fff970c);
                  if(magic[8] == '0') {
                    oracle_update(0x77e200b4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x20dbc445);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6f6d04e6);
                if(magic[7] == '0') {
                  oracle_update(0x7dbfe450);
                  if(magic[8] == '0') {
                    oracle_update(0xbae9467);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x769b5161);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3bfe8cf1);
                  if(magic[8] == '0') {
                    oracle_update(0x7fbe8449);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x75f4beed);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7fc511f9);
              if(magic[6] == '0') {
                oracle_update(0x3f7b42eb);
                if(magic[7] == '0') {
                  oracle_update(0x2ab70c1c);
                  if(magic[8] == '0') {
                    oracle_update(0x7f6b4c48);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fe9d8ff);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6fecde32);
                  if(magic[8] == '0') {
                    oracle_update(0x3bf7d093);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ef62375);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6bdbacca);
                if(magic[7] == '0') {
                  oracle_update(0x7fb86a80);
                  if(magic[8] == '0') {
                    oracle_update(0x7fbf97b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x676ce18c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x23dfda70);
                  if(magic[8] == '0') {
                    oracle_update(0x5a114c31);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x29e3fba8);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x3bc6c009);
            if(magic[5] == '0') {
              oracle_update(0x5fc99d69);
              if(magic[6] == '0') {
                oracle_update(0x7f73a2e6);
                if(magic[7] == '0') {
                  oracle_update(0x7dbb20f3);
                  if(magic[8] == '0') {
                    oracle_update(0x7fad8296);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bdd5d61);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x47ff4c94);
                  if(magic[8] == '0') {
                    oracle_update(0xfcf09ac);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x37af8eed);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7dbfbace);
                if(magic[7] == '0') {
                  oracle_update(0x7f76bbdf);
                  if(magic[8] == '0') {
                    oracle_update(0x7e5c0640);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f5f2dc6);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5caf3b3b);
                  if(magic[8] == '0') {
                    oracle_update(0x1b8d1623);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6db67fb4);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x6ffffa7a);
              if(magic[6] == '0') {
                oracle_update(0x5abe4650);
                if(magic[7] == '0') {
                  oracle_update(0x4bfb8168);
                  if(magic[8] == '0') {
                    oracle_update(0x7befd315);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x59fe762f);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f7edaf1);
                  if(magic[8] == '0') {
                    oracle_update(0x3fefcfaa);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5dffa5a1);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0xf3ca59f);
                if(magic[7] == '0') {
                  oracle_update(0x2c7f495b);
                  if(magic[8] == '0') {
                    oracle_update(0x69ad7c10);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2faf2326);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x44772c8c);
                  if(magic[8] == '0') {
                    oracle_update(0x5947308f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ffffdc3);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x79ffb02f);
          if(magic[4] == '0') {
            oracle_update(0x5df77a55);
            if(magic[5] == '0') {
              oracle_update(0x7e9e2b4a);
              if(magic[6] == '0') {
                oracle_update(0x2ff78a3c);
                if(magic[7] == '0') {
                  oracle_update(0x6b69d7ce);
                  if(magic[8] == '0') {
                    oracle_update(0x7b7607e0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7b253671);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x47ffe4d5);
                  if(magic[8] == '0') {
                    oracle_update(0x19af7ccb);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4ffeafa0);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5f3ef518);
                if(magic[7] == '0') {
                  oracle_update(0x3e9fd777);
                  if(magic[8] == '0') {
                    oracle_update(0x3b1da5ad);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5f770d95);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7bc75cb3);
                  if(magic[8] == '0') {
                    oracle_update(0x7bd9ca1b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2fea1e3c);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x2ebbd73c);
              if(magic[6] == '0') {
                oracle_update(0x7fa79354);
                if(magic[7] == '0') {
                  oracle_update(0x73f361a7);
                  if(magic[8] == '0') {
                    oracle_update(0x3fbfe5fe);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3cef40d8);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3ee5af4b);
                  if(magic[8] == '0') {
                    oracle_update(0x37f92e0f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7e7b7ecd);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7ffff4bc);
                if(magic[7] == '0') {
                  oracle_update(0x7e3a5ec5);
                  if(magic[8] == '0') {
                    oracle_update(0x3bff6da8);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3bf77261);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3bbfc1e3);
                  if(magic[8] == '0') {
                    oracle_update(0x3f77c0c1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7734515d);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x7ef9fa83);
            if(magic[5] == '0') {
              oracle_update(0x7fbe1c3a);
              if(magic[6] == '0') {
                oracle_update(0x67af89e0);
                if(magic[7] == '0') {
                  oracle_update(0x7fb9ccfe);
                  if(magic[8] == '0') {
                    oracle_update(0x7ce5cb48);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1fffda2e);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5effbf2c);
                  if(magic[8] == '0') {
                    oracle_update(0x7a574d2d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6dcfcb20);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5aee0fef);
                if(magic[7] == '0') {
                  oracle_update(0xcdf669e);
                  if(magic[8] == '0') {
                    oracle_update(0x76fb6735);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fbfaeab);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7effd248);
                  if(magic[8] == '0') {
                    oracle_update(0x3f5a65ff);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6ef7ce80);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x4ff2ef95);
              if(magic[6] == '0') {
                oracle_update(0x73ff256b);
                if(magic[7] == '0') {
                  oracle_update(0x6fefd3b9);
                  if(magic[8] == '0') {
                    oracle_update(0x5bff6152);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5f5b01a5);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6f7f0c69);
                  if(magic[8] == '0') {
                    oracle_update(0x3ff5f5d3);
                    oracle_get_flag();
                  } else {
                    oracle_update(0xa7a3980);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x69feac77);
                if(magic[7] == '0') {
                  oracle_update(0x7f3f71b0);
                  if(magic[8] == '0') {
                    oracle_update(0x7b7b2265);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2bf301b2);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3cfd8555);
                  if(magic[8] == '0') {
                    oracle_update(0x63bf1c05);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5f11abc8);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      } else {
        oracle_update(0x17bfca4a);
        if(magic[3] == '0') {
          oracle_update(0x2d7dc8cf);
          if(magic[4] == '0') {
            oracle_update(0x7dbe84db);
            if(magic[5] == '0') {
              oracle_update(0x5bfeda9a);
              if(magic[6] == '0') {
                oracle_update(0x7feed90b);
                if(magic[7] == '0') {
                  oracle_update(0x79fffc8e);
                  if(magic[8] == '0') {
                    oracle_update(0x6f5fdade);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x17fe2f62);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6abb059d);
                  if(magic[8] == '0') {
                    oracle_update(0x2f3b0fc5);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7a821ae6);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x39dfb6cf);
                if(magic[7] == '0') {
                  oracle_update(0x5e8ddbf2);
                  if(magic[8] == '0') {
                    oracle_update(0x76fbd337);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5fb3a84b);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7b53b798);
                  if(magic[8] == '0') {
                    oracle_update(0x7dbf9678);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fdb8534);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x6fdf10cb);
              if(magic[6] == '0') {
                oracle_update(0x3bf792f9);
                if(magic[7] == '0') {
                  oracle_update(0x3dfb9d36);
                  if(magic[8] == '0') {
                    oracle_update(0x77cf8624);
                    oracle_get_flag();
                  } else {
                    oracle_update(0xeff872b);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6eff09c1);
                  if(magic[8] == '0') {
                    oracle_update(0x7ff7074c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x69bfdf72);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x67fd9569);
                if(magic[7] == '0') {
                  oracle_update(0x7bfff09f);
                  if(magic[8] == '0') {
                    oracle_update(0x3df26c8d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x75370cd9);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7faf7bb4);
                  if(magic[8] == '0') {
                    oracle_update(0x7edf3435);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x79bf6fe0);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x5be2997a);
            if(magic[5] == '0') {
              oracle_update(0x6cfe8537);
              if(magic[6] == '0') {
                oracle_update(0x77ff8938);
                if(magic[7] == '0') {
                  oracle_update(0x7ffeda1c);
                  if(magic[8] == '0') {
                    oracle_update(0xff33e98);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3fca371f);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3be4467b);
                  if(magic[8] == '0') {
                    oracle_update(0x5fff99c4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x538dc557);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x777efe96);
                if(magic[7] == '0') {
                  oracle_update(0x6cba3548);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffc1b96);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7deba633);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3fe628c0);
                  if(magic[8] == '0') {
                    oracle_update(0x770ee46e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fe7a9d8);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x6d3d146d);
              if(magic[6] == '0') {
                oracle_update(0x4fadde58);
                if(magic[7] == '0') {
                  oracle_update(0x1981c5fd);
                  if(magic[8] == '0') {
                    oracle_update(0x6a96b241);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7b9be68a);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x35a92616);
                  if(magic[8] == '0') {
                    oracle_update(0x7d8ef1ae);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x47fce340);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7cf7d53f);
                if(magic[7] == '0') {
                  oracle_update(0x37ff6e1f);
                  if(magic[8] == '0') {
                    oracle_update(0x7effa721);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7b59e6ce);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7b7f812d);
                  if(magic[8] == '0') {
                    oracle_update(0x5fd6a8ba);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7feeea6a);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x7ff657f7);
          if(magic[4] == '0') {
            oracle_update(0x57ae57d0);
            if(magic[5] == '0') {
              oracle_update(0x3f772067);
              if(magic[6] == '0') {
                oracle_update(0x79f7f643);
                if(magic[7] == '0') {
                  oracle_update(0x6efd1597);
                  if(magic[8] == '0') {
                    oracle_update(0x67f3f5f1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fdf35af);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x16ef3eb2);
                  if(magic[8] == '0') {
                    oracle_update(0x5fff738e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f47fcb1);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6bf8a338);
                if(magic[7] == '0') {
                  oracle_update(0x7b9be91b);
                  if(magic[8] == '0') {
                    oracle_update(0x5fbf68a9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6efd4132);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fea2f22);
                  if(magic[8] == '0') {
                    oracle_update(0x5f37ce4c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6f7eb7aa);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x147ef3cf);
              if(magic[6] == '0') {
                oracle_update(0x3bbbf93b);
                if(magic[7] == '0') {
                  oracle_update(0x16d25d2e);
                  if(magic[8] == '0') {
                    oracle_update(0x288d1c0d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f3e3a1b);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3fff824d);
                  if(magic[8] == '0') {
                    oracle_update(0x2dfb6430);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3ddf6bf7);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x1ffd103f);
                if(magic[7] == '0') {
                  oracle_update(0x4dee0489);
                  if(magic[8] == '0') {
                    oracle_update(0x2f7a0d74);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x56d5e6a8);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f070b6c);
                  if(magic[8] == '0') {
                    oracle_update(0x7e2fa973);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5fb29d81);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x77ef87d2);
            if(magic[5] == '0') {
              oracle_update(0x2dbff03b);
              if(magic[6] == '0') {
                oracle_update(0x5b1fb203);
                if(magic[7] == '0') {
                  oracle_update(0x7fa738e2);
                  if(magic[8] == '0') {
                    oracle_update(0x1feff29b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5b7b2f1a);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x77f71f60);
                  if(magic[8] == '0') {
                    oracle_update(0x7effce38);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3bfbf54d);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x2dafa5eb);
                if(magic[7] == '0') {
                  oracle_update(0x7f2f6aab);
                  if(magic[8] == '0') {
                    oracle_update(0x7fffceb0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x377f83f9);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7d76772b);
                  if(magic[8] == '0') {
                    oracle_update(0x1fff2189);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bb71d89);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x6c794476);
              if(magic[6] == '0') {
                oracle_update(0x7f7ec9ed);
                if(magic[7] == '0') {
                  oracle_update(0x30ad7d4a);
                  if(magic[8] == '0') {
                    oracle_update(0x3d97d9d7);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x57f74b52);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x1f6b6857);
                  if(magic[8] == '0') {
                    oracle_update(0x7f4f7500);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3f494959);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5bf654d2);
                if(magic[7] == '0') {
                  oracle_update(0x7bfb48ae);
                  if(magic[8] == '0') {
                    oracle_update(0x2a7d0a0e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3d6738a4);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6ba45616);
                  if(magic[8] == '0') {
                    oracle_update(0x7fd10114);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f2d52e6);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      }
    } else {
      oracle_update(0x3bfd94d7);
      if(magic[2] == '0') {
        oracle_update(0x7dedccbf);
        if(magic[3] == '0') {
          oracle_update(0x7dbe5995);
          if(magic[4] == '0') {
            oracle_update(0x3fffe68b);
            if(magic[5] == '0') {
              oracle_update(0x7f7ac3c4);
              if(magic[6] == '0') {
                oracle_update(0x6afd03bf);
                if(magic[7] == '0') {
                  oracle_update(0x5e65704e);
                  if(magic[8] == '0') {
                    oracle_update(0x7bfda956);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x572b59d9);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x1ec84fce);
                  if(magic[8] == '0') {
                    oracle_update(0x7fceadcb);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fefae70);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5bebbeef);
                if(magic[7] == '0') {
                  oracle_update(0x59fe8b12);
                  if(magic[8] == '0') {
                    oracle_update(0x7fff85a6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x72fb1977);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ef3dfbc);
                  if(magic[8] == '0') {
                    oracle_update(0x37746e0c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7775e4c6);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x5f7fcadb);
              if(magic[6] == '0') {
                oracle_update(0x5efc6f3a);
                if(magic[7] == '0') {
                  oracle_update(0x69e7b7d4);
                  if(magic[8] == '0') {
                    oracle_update(0x5fe78ea6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x78fb85ea);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x76fd360f);
                  if(magic[8] == '0') {
                    oracle_update(0x47f7e761);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4f6e861b);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5d79cc98);
                if(magic[7] == '0') {
                  oracle_update(0x7edf600b);
                  if(magic[8] == '0') {
                    oracle_update(0x7f7fff46);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3fbfa4f1);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x777b9b03);
                  if(magic[8] == '0') {
                    oracle_update(0xfdb94e5);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77dff40a);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x3e5dcc5e);
            if(magic[5] == '0') {
              oracle_update(0x63fdc66a);
              if(magic[6] == '0') {
                oracle_update(0x7ef2a491);
                if(magic[7] == '0') {
                  oracle_update(0x7aed9362);
                  if(magic[8] == '0') {
                    oracle_update(0x3f7f79d7);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6decb5ca);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7efb0717);
                  if(magic[8] == '0') {
                    oracle_update(0x27a39d0b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7d3fa41e);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5bafc7fa);
                if(magic[7] == '0') {
                  oracle_update(0x7e2f0283);
                  if(magic[8] == '0') {
                    oracle_update(0x6eb196a3);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fd5c9e1);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fe32eb7);
                  if(magic[8] == '0') {
                    oracle_update(0x76fff496);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ff84c92);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x777fa3c5);
              if(magic[6] == '0') {
                oracle_update(0x66fd6f63);
                if(magic[7] == '0') {
                  oracle_update(0x7fcf1b84);
                  if(magic[8] == '0') {
                    oracle_update(0x1bbddec0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5afe86e3);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3fbf6b36);
                  if(magic[8] == '0') {
                    oracle_update(0x6faaa1c0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5fffb791);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x1d7aeb7d);
                if(magic[7] == '0') {
                  oracle_update(0x66b38092);
                  if(magic[8] == '0') {
                    oracle_update(0x73becbbe);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5edaa161);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x774fc277);
                  if(magic[8] == '0') {
                    oracle_update(0x72f35459);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1d6b9ede);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x7a736b76);
          if(magic[4] == '0') {
            oracle_update(0x7e3f0cbd);
            if(magic[5] == '0') {
              oracle_update(0x7db77010);
              if(magic[6] == '0') {
                oracle_update(0x75f66792);
                if(magic[7] == '0') {
                  oracle_update(0x76e55614);
                  if(magic[8] == '0') {
                    oracle_update(0x7fb3e34f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x74a9f5d3);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x736f4a4a);
                  if(magic[8] == '0') {
                    oracle_update(0x625bb8e2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5bf5a30c);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7ef7ef3e);
                if(magic[7] == '0') {
                  oracle_update(0x7bff9136);
                  if(magic[8] == '0') {
                    oracle_update(0x6f955786);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7cff5434);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3ae6c968);
                  if(magic[8] == '0') {
                    oracle_update(0x7d1f1b95);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2defcf59);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7fc7bd6e);
              if(magic[6] == '0') {
                oracle_update(0x77dd26aa);
                if(magic[7] == '0') {
                  oracle_update(0x6b4f8c10);
                  if(magic[8] == '0') {
                    oracle_update(0x7a5f7343);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x773dc078);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f7f0568);
                  if(magic[8] == '0') {
                    oracle_update(0x1d47633b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7af9b60a);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7ffee3e9);
                if(magic[7] == '0') {
                  oracle_update(0x7fdb40f2);
                  if(magic[8] == '0') {
                    oracle_update(0x6efdd48c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f7b8f9c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x64eb8508);
                  if(magic[8] == '0') {
                    oracle_update(0x3ef5ecd6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3efef716);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x7ffc232e);
            if(magic[5] == '0') {
              oracle_update(0xfcbbce4);
              if(magic[6] == '0') {
                oracle_update(0x7ebf1fad);
                if(magic[7] == '0') {
                  oracle_update(0x74555ace);
                  if(magic[8] == '0') {
                    oracle_update(0x5db68323);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7dfb5080);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0xc9fd262);
                  if(magic[8] == '0') {
                    oracle_update(0x7d6d86da);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fbd8b8b);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x59ddb01b);
                if(magic[7] == '0') {
                  oracle_update(0x5fd10a61);
                  if(magic[8] == '0') {
                    oracle_update(0x7efc607a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fff2a7d);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x29dbdd1f);
                  if(magic[8] == '0') {
                    oracle_update(0x7c5f8086);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bdf7665);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7d0ca7a0);
              if(magic[6] == '0') {
                oracle_update(0x7bdadc36);
                if(magic[7] == '0') {
                  oracle_update(0x67f79827);
                  if(magic[8] == '0') {
                    oracle_update(0x73ed5013);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3edd08cc);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x4ed58a18);
                  if(magic[8] == '0') {
                    oracle_update(0x7fffaee7);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3effe247);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x64ff8c92);
                if(magic[7] == '0') {
                  oracle_update(0x7ffb09a2);
                  if(magic[8] == '0') {
                    oracle_update(0x77731641);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x79e3ac58);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x4ed0099a);
                  if(magic[8] == '0') {
                    oracle_update(0x1ffaa05e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2bffd33e);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      } else {
        oracle_update(0x79ce0c1c);
        if(magic[3] == '0') {
          oracle_update(0x7ed55ad0);
          if(magic[4] == '0') {
            oracle_update(0x5df87090);
            if(magic[5] == '0') {
              oracle_update(0x77fe509e);
              if(magic[6] == '0') {
                oracle_update(0x7ff7108e);
                if(magic[7] == '0') {
                  oracle_update(0x5fbf5ed5);
                  if(magic[8] == '0') {
                    oracle_update(0x6fb39057);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3bbf5f86);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x77ec40dd);
                  if(magic[8] == '0') {
                    oracle_update(0x1f77174b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f95f592);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x4f9f76ae);
                if(magic[7] == '0') {
                  oracle_update(0x720b7deb);
                  if(magic[8] == '0') {
                    oracle_update(0x7fedcad1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2a7ff3d4);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x4a773916);
                  if(magic[8] == '0') {
                    oracle_update(0x4bd719e6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7b3e3f20);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x386b5c12);
              if(magic[6] == '0') {
                oracle_update(0x7ffd9fdb);
                if(magic[7] == '0') {
                  oracle_update(0x5bff09bc);
                  if(magic[8] == '0') {
                    oracle_update(0x6bfba117);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4fed1d48);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f7ff616);
                  if(magic[8] == '0') {
                    oracle_update(0x5fff06c3);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fd7d371);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x67c6783a);
                if(magic[7] == '0') {
                  oracle_update(0x7beedee9);
                  if(magic[8] == '0') {
                    oracle_update(0x5f557173);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fef201c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f5f1f03);
                  if(magic[8] == '0') {
                    oracle_update(0x55f72338);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fdf3552);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x5d9f88f3);
            if(magic[5] == '0') {
              oracle_update(0x5fff2594);
              if(magic[6] == '0') {
                oracle_update(0x4d6e0e74);
                if(magic[7] == '0') {
                  oracle_update(0x7bbf073d);
                  if(magic[8] == '0') {
                    oracle_update(0x3bf41719);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x57ddcac1);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x75fd9708);
                  if(magic[8] == '0') {
                    oracle_update(0x7fff7fea);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4ddfa629);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5ebdc755);
                if(magic[7] == '0') {
                  oracle_update(0x199ff27f);
                  if(magic[8] == '0') {
                    oracle_update(0x4abbe063);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5fff9612);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x767f3784);
                  if(magic[8] == '0') {
                    oracle_update(0x7f690437);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77766443);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x73dbf336);
              if(magic[6] == '0') {
                oracle_update(0x7df7dd6f);
                if(magic[7] == '0') {
                  oracle_update(0xfa7bc7d);
                  if(magic[8] == '0') {
                    oracle_update(0x27cf1d1f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7aff54d);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6b9fa360);
                  if(magic[8] == '0') {
                    oracle_update(0x37f6811c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6dff40e6);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x73fee37d);
                if(magic[7] == '0') {
                  oracle_update(0x6f7f0e2d);
                  if(magic[8] == '0') {
                    oracle_update(0x738f4889);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x61170461);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7efb25d5);
                  if(magic[8] == '0') {
                    oracle_update(0x7bd5545d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x39b31f51);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x77f7a441);
          if(magic[4] == '0') {
            oracle_update(0x7fffaa51);
            if(magic[5] == '0') {
              oracle_update(0x4dffe4f8);
              if(magic[6] == '0') {
                oracle_update(0x6df74187);
                if(magic[7] == '0') {
                  oracle_update(0x7dfb00de);
                  if(magic[8] == '0') {
                    oracle_update(0x7fffce8c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6b7399da);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x76bf5d0e);
                  if(magic[8] == '0') {
                    oracle_update(0x6e77aa66);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x63d79932);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7efea5ce);
                if(magic[7] == '0') {
                  oracle_update(0x7ffd70f8);
                  if(magic[8] == '0') {
                    oracle_update(0xfe9da01);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fef8513);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f7788c4);
                  if(magic[8] == '0') {
                    oracle_update(0x7e3c0477);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7d7e8387);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x6f06eebb);
              if(magic[6] == '0') {
                oracle_update(0x7cb3d23a);
                if(magic[7] == '0') {
                  oracle_update(0x7ff5d4a2);
                  if(magic[8] == '0') {
                    oracle_update(0x3b966ae2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7eff4578);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fdfc563);
                  if(magic[8] == '0') {
                    oracle_update(0x6ffe4194);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3fdfde8e);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x2fb740df);
                if(magic[7] == '0') {
                  oracle_update(0x7fdbf9f8);
                  if(magic[8] == '0') {
                    oracle_update(0x1bbde762);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6efff5de);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ee6ed42);
                  if(magic[8] == '0') {
                    oracle_update(0x7bff1ca2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5ffda736);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x67f97e3a);
            if(magic[5] == '0') {
              oracle_update(0x5d7eab06);
              if(magic[6] == '0') {
                oracle_update(0x7bff138b);
                if(magic[7] == '0') {
                  oracle_update(0x5b7fd5cc);
                  if(magic[8] == '0') {
                    oracle_update(0x7bffff43);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x499539a6);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x47f12d4);
                  if(magic[8] == '0') {
                    oracle_update(0x79af8114);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x73f83473);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x77fbdb81);
                if(magic[7] == '0') {
                  oracle_update(0x6ecff872);
                  if(magic[8] == '0') {
                    oracle_update(0x7fbf021d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3db6394d);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5bdf52f1);
                  if(magic[8] == '0') {
                    oracle_update(0x3795a2dc);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3ff7282b);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x37374246);
              if(magic[6] == '0') {
                oracle_update(0x7feff5e8);
                if(magic[7] == '0') {
                  oracle_update(0x7fff0bf5);
                  if(magic[8] == '0') {
                    oracle_update(0xfbf35aa);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7db4f9bd);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x76557b0e);
                  if(magic[8] == '0') {
                    oracle_update(0x7fbef403);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7b6f015b);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7a57cfb7);
                if(magic[7] == '0') {
                  oracle_update(0x3e7ea34b);
                  if(magic[8] == '0') {
                    oracle_update(0x5b6fbb3a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f3b1724);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x36f38725);
                  if(magic[8] == '0') {
                    oracle_update(0x77fd0c69);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ffac30c);
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
