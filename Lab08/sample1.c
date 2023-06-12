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
  oracle_update(0x5bed1dcc);
  if(magic[0] == '0') {
    oracle_update(0x456f48a2);
    if(magic[1] == '0') {
      oracle_update(0x71ef6550);
      if(magic[2] == '0') {
        oracle_update(0x6dd7ef94);
        if(magic[3] == '0') {
          oracle_update(0x7dabad0a);
          if(magic[4] == '0') {
            oracle_update(0x7fd3254c);
            if(magic[5] == '0') {
              oracle_update(0x2cf57881);
              if(magic[6] == '0') {
                oracle_update(0x3ff1b1b0);
                if(magic[7] == '0') {
                  oracle_update(0x66fdf64c);
                  if(magic[8] == '0') {
                    oracle_update(0x7eebe47d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7df60c4b);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x69eece4a);
                  if(magic[8] == '0') {
                    oracle_update(0x2f933b1f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7abfb994);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7b7a054e);
                if(magic[7] == '0') {
                  oracle_update(0x4bbfae5d);
                  if(magic[8] == '0') {
                    oracle_update(0x5ffa53d9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4e5f0812);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fe3013b);
                  if(magic[8] == '0') {
                    oracle_update(0x77baa018);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7d1fc418);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x77fb46d7);
              if(magic[6] == '0') {
                oracle_update(0x3ffdb132);
                if(magic[7] == '0') {
                  oracle_update(0x7f7f2985);
                  if(magic[8] == '0') {
                    oracle_update(0x78ffdb16);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x53ff3dcd);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x2bffa56c);
                  if(magic[8] == '0') {
                    oracle_update(0x1f3f6df5);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x573f9909);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x57fc0ef5);
                if(magic[7] == '0') {
                  oracle_update(0x7e1edfdd);
                  if(magic[8] == '0') {
                    oracle_update(0x6178e0ad);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x697a1253);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x1fff8a57);
                  if(magic[8] == '0') {
                    oracle_update(0x67af063b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x652e499a);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x5bfd24ff);
            if(magic[5] == '0') {
              oracle_update(0x5e8fe305);
              if(magic[6] == '0') {
                oracle_update(0x3af94e87);
                if(magic[7] == '0') {
                  oracle_update(0x1f752c4d);
                  if(magic[8] == '0') {
                    oracle_update(0x7bbac1e4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7df71a4b);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3fc77641);
                  if(magic[8] == '0') {
                    oracle_update(0x7daf3e22);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77fcc6e3);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x57ff935e);
                if(magic[7] == '0') {
                  oracle_update(0x6bfd4092);
                  if(magic[8] == '0') {
                    oracle_update(0x1ffda1e9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4ef70496);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3af05530);
                  if(magic[8] == '0') {
                    oracle_update(0x46b12c03);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7eeef2f1);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x6dfe6964);
              if(magic[6] == '0') {
                oracle_update(0x7e2fcada);
                if(magic[7] == '0') {
                  oracle_update(0x7ff6e844);
                  if(magic[8] == '0') {
                    oracle_update(0x375d1c8a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x70ff261c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x463f0d1b);
                  if(magic[8] == '0') {
                    oracle_update(0x2ff4c4f2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3f6dea98);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x4dceccaf);
                if(magic[7] == '0') {
                  oracle_update(0x5a8fb494);
                  if(magic[8] == '0') {
                    oracle_update(0x2fbfa730);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7dff8d2d);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x2fb79ecb);
                  if(magic[8] == '0') {
                    oracle_update(0x3d7b4219);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5ff79823);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x67ffa1f3);
          if(magic[4] == '0') {
            oracle_update(0x45f6b09c);
            if(magic[5] == '0') {
              oracle_update(0x377e227c);
              if(magic[6] == '0') {
                oracle_update(0x6fe633a5);
                if(magic[7] == '0') {
                  oracle_update(0x6af15335);
                  if(magic[8] == '0') {
                    oracle_update(0x4fff2cac);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x73fe0100);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6ff6ee8e);
                  if(magic[8] == '0') {
                    oracle_update(0x6eff864e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x67e3fccb);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7be6c142);
                if(magic[7] == '0') {
                  oracle_update(0x45b627d9);
                  if(magic[8] == '0') {
                    oracle_update(0x2bfa96d9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x41e56a39);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fc96812);
                  if(magic[8] == '0') {
                    oracle_update(0x57fcca0f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5deec9f5);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x3bd75d83);
              if(magic[6] == '0') {
                oracle_update(0x79f549bf);
                if(magic[7] == '0') {
                  oracle_update(0x755f1bc4);
                  if(magic[8] == '0') {
                    oracle_update(0x66df8de9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x74977119);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x2f7f857a);
                  if(magic[8] == '0') {
                    oracle_update(0x5ffbaf37);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bb9f87a);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x79a25c9b);
                if(magic[7] == '0') {
                  oracle_update(0x7ba1293f);
                  if(magic[8] == '0') {
                    oracle_update(0x56f7589c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x17af03d2);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x4ff10515);
                  if(magic[8] == '0') {
                    oracle_update(0x3ef75c6f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1ffd9eb2);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x7f96c943);
            if(magic[5] == '0') {
              oracle_update(0x37c70542);
              if(magic[6] == '0') {
                oracle_update(0x7ad6ee8c);
                if(magic[7] == '0') {
                  oracle_update(0x7dffaf98);
                  if(magic[8] == '0') {
                    oracle_update(0x4f3f4e63);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3fbbf3ea);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7b5fbf69);
                  if(magic[8] == '0') {
                    oracle_update(0x75be6796);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x79bffcea);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6ff47e86);
                if(magic[7] == '0') {
                  oracle_update(0x79ef8e47);
                  if(magic[8] == '0') {
                    oracle_update(0x7f6ff216);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7723c14c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x17fb5f0d);
                  if(magic[8] == '0') {
                    oracle_update(0x3fa5c44e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2befa2bf);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x1bff619b);
              if(magic[6] == '0') {
                oracle_update(0x75efd98b);
                if(magic[7] == '0') {
                  oracle_update(0x7effdad4);
                  if(magic[8] == '0') {
                    oracle_update(0x5a3f7b53);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x37faa512);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6efc509a);
                  if(magic[8] == '0') {
                    oracle_update(0x2bab6f8a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3d8e80f1);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5df8ec9b);
                if(magic[7] == '0') {
                  oracle_update(0x4feaf75b);
                  if(magic[8] == '0') {
                    oracle_update(0x6d372333);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x24c362dc);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f773a49);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffb20b8);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x37ef08be);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      } else {
        oracle_update(0x7abd688c);
        if(magic[3] == '0') {
          oracle_update(0x7fad1f53);
          if(magic[4] == '0') {
            oracle_update(0x6f4e45cb);
            if(magic[5] == '0') {
              oracle_update(0x7dd92804);
              if(magic[6] == '0') {
                oracle_update(0x1ffbc160);
                if(magic[7] == '0') {
                  oracle_update(0x6ffc5c7b);
                  if(magic[8] == '0') {
                    oracle_update(0x6fbba141);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7df943cd);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x68d74c23);
                  if(magic[8] == '0') {
                    oracle_update(0xbf7ed5e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4fff0746);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7feba310);
                if(magic[7] == '0') {
                  oracle_update(0x45518a1);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffca7db);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x68f39b9a);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fb7d5b2);
                  if(magic[8] == '0') {
                    oracle_update(0x7ded53d4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7e7dbe60);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x32eeb3eb);
              if(magic[6] == '0') {
                oracle_update(0x7bba4915);
                if(magic[7] == '0') {
                  oracle_update(0x3467c1b3);
                  if(magic[8] == '0') {
                    oracle_update(0x7fef5231);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ffff9b1);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5b2e3007);
                  if(magic[8] == '0') {
                    oracle_update(0x6dbb00fe);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fee89e2);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x37c67343);
                if(magic[7] == '0') {
                  oracle_update(0x7ef76afe);
                  if(magic[8] == '0') {
                    oracle_update(0x2d37ff65);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fbfa3d4);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x753c4080);
                  if(magic[8] == '0') {
                    oracle_update(0x747dee4c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3dfe8f38);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x676fce77);
            if(magic[5] == '0') {
              oracle_update(0x4a8f424a);
              if(magic[6] == '0') {
                oracle_update(0x1fbe85c3);
                if(magic[7] == '0') {
                  oracle_update(0x1fffb073);
                  if(magic[8] == '0') {
                    oracle_update(0x6f9da93a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7b969864);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ff90ac1);
                  if(magic[8] == '0') {
                    oracle_update(0x57fa13bd);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3fef760d);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x4ee2bdbf);
                if(magic[7] == '0') {
                  oracle_update(0x7fff1482);
                  if(magic[8] == '0') {
                    oracle_update(0x7f9c683d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x59b727c1);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ddfb546);
                  if(magic[8] == '0') {
                    oracle_update(0x3f735000);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f698b38);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7ba9bc62);
              if(magic[6] == '0') {
                oracle_update(0x559d4ba2);
                if(magic[7] == '0') {
                  oracle_update(0x6f57d5f7);
                  if(magic[8] == '0') {
                    oracle_update(0x23314993);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1eff63ed);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0xfe77ebe);
                  if(magic[8] == '0') {
                    oracle_update(0x6af7ff8b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fff6ec3);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7eeef21d);
                if(magic[7] == '0') {
                  oracle_update(0x5ddff546);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffbda8d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1ff71f0d);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7d4f17e3);
                  if(magic[8] == '0') {
                    oracle_update(0x6adfbf29);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3fce5867);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x77bf0690);
          if(magic[4] == '0') {
            oracle_update(0x2efbd990);
            if(magic[5] == '0') {
              oracle_update(0x7bfddc45);
              if(magic[6] == '0') {
                oracle_update(0x7fe78653);
                if(magic[7] == '0') {
                  oracle_update(0x5bd9e1df);
                  if(magic[8] == '0') {
                    oracle_update(0x6fef814c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x71effefc);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x64aed616);
                  if(magic[8] == '0') {
                    oracle_update(0x37af9076);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x756f50a2);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x3f7f781c);
                if(magic[7] == '0') {
                  oracle_update(0x7f85183b);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffc86b0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ff7b4c5);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6bde2ee5);
                  if(magic[8] == '0') {
                    oracle_update(0x56bb5e85);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3ffe78e1);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7feb2e82);
              if(magic[6] == '0') {
                oracle_update(0x77764d00);
                if(magic[7] == '0') {
                  oracle_update(0x7fef06f5);
                  if(magic[8] == '0') {
                    oracle_update(0x6e3fc4e7);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5ecef2aa);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ffec4e2);
                  if(magic[8] == '0') {
                    oracle_update(0x57f7ca9d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6d7fc363);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x56f87ae4);
                if(magic[7] == '0') {
                  oracle_update(0x75f39409);
                  if(magic[8] == '0') {
                    oracle_update(0x377b7404);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x76716e04);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x4d6b8c89);
                  if(magic[8] == '0') {
                    oracle_update(0x3bff90b7);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x47eb9b90);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x7ffb077c);
            if(magic[5] == '0') {
              oracle_update(0x7ff75471);
              if(magic[6] == '0') {
                oracle_update(0x7b8f7c6c);
                if(magic[7] == '0') {
                  oracle_update(0x7d7e054b);
                  if(magic[8] == '0') {
                    oracle_update(0x5ebfb736);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5aafa70c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7feb8337);
                  if(magic[8] == '0') {
                    oracle_update(0x47ef0f95);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fbf4061);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x79eb8c76);
                if(magic[7] == '0') {
                  oracle_update(0x19fd011a);
                  if(magic[8] == '0') {
                    oracle_update(0x7e5d7012);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x772f6cf5);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3cff0923);
                  if(magic[8] == '0') {
                    oracle_update(0x5eb73524);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x67df76af);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x64f36ad9);
              if(magic[6] == '0') {
                oracle_update(0x77ffcf63);
                if(magic[7] == '0') {
                  oracle_update(0x5f3d3e5e);
                  if(magic[8] == '0') {
                    oracle_update(0x7b4fc2a5);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bfbbe7f);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x67eba464);
                  if(magic[8] == '0') {
                    oracle_update(0x3f67cac6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x21ef326d);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7dd7e133);
                if(magic[7] == '0') {
                  oracle_update(0x37b440e9);
                  if(magic[8] == '0') {
                    oracle_update(0x3fce6453);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x79ff71f7);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7d6c8566);
                  if(magic[8] == '0') {
                    oracle_update(0x7d3e66dc);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2de9070d);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      }
    } else {
      oracle_update(0x47f713aa);
      if(magic[2] == '0') {
        oracle_update(0x7f7b2648);
        if(magic[3] == '0') {
          oracle_update(0x25e31b68);
          if(magic[4] == '0') {
            oracle_update(0x3a7f178c);
            if(magic[5] == '0') {
              oracle_update(0x7ffeb6ad);
              if(magic[6] == '0') {
                oracle_update(0x5dd76afa);
                if(magic[7] == '0') {
                  oracle_update(0x6edd204e);
                  if(magic[8] == '0') {
                    oracle_update(0x7e77a814);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2e7b65c0);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f7f1d48);
                  if(magic[8] == '0') {
                    oracle_update(0x7fbea5c8);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x662f4def);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0xc4f0355);
                if(magic[7] == '0') {
                  oracle_update(0x7acb0744);
                  if(magic[8] == '0') {
                    oracle_update(0x1fda9b47);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3eefe471);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x4eaf1279);
                  if(magic[8] == '0') {
                    oracle_update(0x526ea0bc);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5fa9ca78);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x79b59b00);
              if(magic[6] == '0') {
                oracle_update(0x3f8f3649);
                if(magic[7] == '0') {
                  oracle_update(0x1e3dab1a);
                  if(magic[8] == '0') {
                    oracle_update(0x7bf9c47a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2cf7f0a4);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x777f802c);
                  if(magic[8] == '0') {
                    oracle_update(0x1fc10ad9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x331bce0b);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7ff94bab);
                if(magic[7] == '0') {
                  oracle_update(0x3f7bdcbd);
                  if(magic[8] == '0') {
                    oracle_update(0x6f6dc383);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x736f6437);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ffe839f);
                  if(magic[8] == '0') {
                    oracle_update(0x6afd4d8b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6bdf4873);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x26fd6194);
            if(magic[5] == '0') {
              oracle_update(0x1fb6ff1e);
              if(magic[6] == '0') {
                oracle_update(0x7c1f7d3b);
                if(magic[7] == '0') {
                  oracle_update(0x7a19a401);
                  if(magic[8] == '0') {
                    oracle_update(0x7ddf195f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6e77ad49);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6f7fbd5);
                  if(magic[8] == '0') {
                    oracle_update(0x7fef5454);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f3fd502);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x19ea0caa);
                if(magic[7] == '0') {
                  oracle_update(0x651f3f55);
                  if(magic[8] == '0') {
                    oracle_update(0x7fdfb61e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7977c007);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0xff97c2c);
                  if(magic[8] == '0') {
                    oracle_update(0x77de1494);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5e7fba3b);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7e7e4d2e);
              if(magic[6] == '0') {
                oracle_update(0x4cdd93d8);
                if(magic[7] == '0') {
                  oracle_update(0x7fbb8cd9);
                  if(magic[8] == '0') {
                    oracle_update(0x7f4f1376);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6aea6850);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x32b5b158);
                  if(magic[8] == '0') {
                    oracle_update(0x5f5bcdf2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x375b8d7d);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7ecf4824);
                if(magic[7] == '0') {
                  oracle_update(0x6fcfdcd9);
                  if(magic[8] == '0') {
                    oracle_update(0x1175765e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x73bfbbd5);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x76fef08a);
                  if(magic[8] == '0') {
                    oracle_update(0x4bf95cf9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0xff8b989);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x5f7f5a28);
          if(magic[4] == '0') {
            oracle_update(0x7ffbbe1c);
            if(magic[5] == '0') {
              oracle_update(0x2bbfb7f9);
              if(magic[6] == '0') {
                oracle_update(0x3efbb227);
                if(magic[7] == '0') {
                  oracle_update(0x7dbf923a);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffbb27b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x67f33580);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6fdf35b1);
                  if(magic[8] == '0') {
                    oracle_update(0x6cf620b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1eaaf66b);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6374ea3e);
                if(magic[7] == '0') {
                  oracle_update(0x3f7f5a00);
                  if(magic[8] == '0') {
                    oracle_update(0x3de9c3f5);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x76ff6f03);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x686ba7b8);
                  if(magic[8] == '0') {
                    oracle_update(0x5cbf40f2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6d7fb199);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x6bfd57e0);
              if(magic[6] == '0') {
                oracle_update(0x7f2794f8);
                if(magic[7] == '0') {
                  oracle_update(0x6d7e1f85);
                  if(magic[8] == '0') {
                    oracle_update(0x7d78d41f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1be972b8);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ff7443d);
                  if(magic[8] == '0') {
                    oracle_update(0x3adb5044);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5cbd3386);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x652a3ab3);
                if(magic[7] == '0') {
                  oracle_update(0x7c5a349a);
                  if(magic[8] == '0') {
                    oracle_update(0x76f3f1ea);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6f5f8a8c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x4ffdde4a);
                  if(magic[8] == '0') {
                    oracle_update(0x4ffbf3a4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x66dfc53c);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0xafe5f51);
            if(magic[5] == '0') {
              oracle_update(0x3fbf3cab);
              if(magic[6] == '0') {
                oracle_update(0x39675e8d);
                if(magic[7] == '0') {
                  oracle_update(0x7b9fceb3);
                  if(magic[8] == '0') {
                    oracle_update(0x6e72aae8);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ffeacef);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5b5f7db6);
                  if(magic[8] == '0') {
                    oracle_update(0x4cff053e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6bdb251d);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6fab675c);
                if(magic[7] == '0') {
                  oracle_update(0x6e8cdf17);
                  if(magic[8] == '0') {
                    oracle_update(0x697f59cd);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3624a1bd);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7bf78bbc);
                  if(magic[8] == '0') {
                    oracle_update(0x3abfbd5f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x737fef27);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x39ff3ac4);
              if(magic[6] == '0') {
                oracle_update(0x7ff8403a);
                if(magic[7] == '0') {
                  oracle_update(0x6bf91a74);
                  if(magic[8] == '0') {
                    oracle_update(0x317e6d3f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x63ea338f);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7d5c39b3);
                  if(magic[8] == '0') {
                    oracle_update(0x7dfd6215);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x773e8427);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6f9fbeb3);
                if(magic[7] == '0') {
                  oracle_update(0x776f73d2);
                  if(magic[8] == '0') {
                    oracle_update(0x5fff5672);
                    oracle_get_flag();
                  } else {
                    oracle_update(0xeb3a2e3);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6f7ff474);
                  if(magic[8] == '0') {
                    oracle_update(0x6f5652c9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x797ff036);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      } else {
        oracle_update(0x24ff7866);
        if(magic[3] == '0') {
          oracle_update(0x5bff690e);
          if(magic[4] == '0') {
            oracle_update(0x7abe5360);
            if(magic[5] == '0') {
              oracle_update(0x76ffdbc5);
              if(magic[6] == '0') {
                oracle_update(0x3fb4ccd3);
                if(magic[7] == '0') {
                  oracle_update(0x665d3810);
                  if(magic[8] == '0') {
                    oracle_update(0x7fbb62db);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5de70aa4);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7abf9f8a);
                  if(magic[8] == '0') {
                    oracle_update(0x79bd4080);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3fef314c);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7b5f5f43);
                if(magic[7] == '0') {
                  oracle_update(0x7efa7250);
                  if(magic[8] == '0') {
                    oracle_update(0x1aedc3e2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f4e350c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x477b972a);
                  if(magic[8] == '0') {
                    oracle_update(0x4d632660);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2c3f12c0);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x6fafad32);
              if(magic[6] == '0') {
                oracle_update(0x477f38a2);
                if(magic[7] == '0') {
                  oracle_update(0x17df6f27);
                  if(magic[8] == '0') {
                    oracle_update(0x77e18614);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x674f5124);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5b7f8e18);
                  if(magic[8] == '0') {
                    oracle_update(0x6f6dad65);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x556f3c29);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6bffbf29);
                if(magic[7] == '0') {
                  oracle_update(0x37c7a344);
                  if(magic[8] == '0') {
                    oracle_update(0x2fffe3fe);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5f3d4dee);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ce77c5d);
                  if(magic[8] == '0') {
                    oracle_update(0x36df472b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7eb63478);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x3baffa20);
            if(magic[5] == '0') {
              oracle_update(0x3eefb9b8);
              if(magic[6] == '0') {
                oracle_update(0x75fdb458);
                if(magic[7] == '0') {
                  oracle_update(0x7bff4682);
                  if(magic[8] == '0') {
                    oracle_update(0x7ed7db4a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3f7f121f);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7b9f8000);
                  if(magic[8] == '0') {
                    oracle_update(0x1fcb6ede);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bebb618);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5ffb7eba);
                if(magic[7] == '0') {
                  oracle_update(0x7ffff3f6);
                  if(magic[8] == '0') {
                    oracle_update(0x36f01675);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fffb402);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6ffd918b);
                  if(magic[8] == '0') {
                    oracle_update(0x3efe0f59);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fdad076);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x799f9988);
              if(magic[6] == '0') {
                oracle_update(0x7fb3ca9a);
                if(magic[7] == '0') {
                  oracle_update(0x6eee48d0);
                  if(magic[8] == '0') {
                    oracle_update(0x3d6d0d11);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x61be7d96);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7bfe05b7);
                  if(magic[8] == '0') {
                    oracle_update(0x7bf7f6e5);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3dbfbe4e);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x67df625c);
                if(magic[7] == '0') {
                  oracle_update(0x3ceaf57c);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffb98cb);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6c7c11ab);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7aacc2ae);
                  if(magic[8] == '0') {
                    oracle_update(0x7ff64a61);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x67bf89fc);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x77777044);
          if(magic[4] == '0') {
            oracle_update(0x7dbf79db);
            if(magic[5] == '0') {
              oracle_update(0x7ffd6f80);
              if(magic[6] == '0') {
                oracle_update(0x7fe9871e);
                if(magic[7] == '0') {
                  oracle_update(0x6ddf2452);
                  if(magic[8] == '0') {
                    oracle_update(0x3faf8540);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1edf4176);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7b3ebf9d);
                  if(magic[8] == '0') {
                    oracle_update(0x76ffdf87);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f8f26df);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5d9e7be8);
                if(magic[7] == '0') {
                  oracle_update(0x76a7a97b);
                  if(magic[8] == '0') {
                    oracle_update(0x77ffe2b4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5bef32d2);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x56e82878);
                  if(magic[8] == '0') {
                    oracle_update(0x775fa1a3);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x43ed877a);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x49bef491);
              if(magic[6] == '0') {
                oracle_update(0x5e17b1bd);
                if(magic[7] == '0') {
                  oracle_update(0x1de3322f);
                  if(magic[8] == '0') {
                    oracle_update(0x7ef724e2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6530692c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3ed5bc63);
                  if(magic[8] == '0') {
                    oracle_update(0x1befbed0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x67fef6ab);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x76fc2d7c);
                if(magic[7] == '0') {
                  oracle_update(0x757722f4);
                  if(magic[8] == '0') {
                    oracle_update(0x5f9f33b7);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1bff3792);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7deb476b);
                  if(magic[8] == '0') {
                    oracle_update(0x7f3b4e79);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5ddfa3c3);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x7dfb04fc);
            if(magic[5] == '0') {
              oracle_update(0x43fd48bd);
              if(magic[6] == '0') {
                oracle_update(0x134a7dc5);
                if(magic[7] == '0') {
                  oracle_update(0x6b7e32d4);
                  if(magic[8] == '0') {
                    oracle_update(0x73bf5daa);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6d7fc7d9);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6f7f8f10);
                  if(magic[8] == '0') {
                    oracle_update(0x7db3dcc9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7efd332d);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5cde3e3b);
                if(magic[7] == '0') {
                  oracle_update(0x36cbd327);
                  if(magic[8] == '0') {
                    oracle_update(0x3f7dc99a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77d7b18a);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x639b3535);
                  if(magic[8] == '0') {
                    oracle_update(0x7fbf6948);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x393519f2);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7ffe90e3);
              if(magic[6] == '0') {
                oracle_update(0x7ed9dd68);
                if(magic[7] == '0') {
                  oracle_update(0x7ff7ebda);
                  if(magic[8] == '0') {
                    oracle_update(0x5e6f3e14);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f1ea9f2);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7efdd899);
                  if(magic[8] == '0') {
                    oracle_update(0x7cefaa99);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x76ff5480);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7cfe6934);
                if(magic[7] == '0') {
                  oracle_update(0x69573518);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffea8f3);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2cd65c68);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7bd70ee3);
                  if(magic[8] == '0') {
                    oracle_update(0x776d4da0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6aebcb27);
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
    oracle_update(0x3ffdf5c3);
    if(magic[1] == '0') {
      oracle_update(0x17d5e70b);
      if(magic[2] == '0') {
        oracle_update(0x5dfa4c2a);
        if(magic[3] == '0') {
          oracle_update(0x5be7b0de);
          if(magic[4] == '0') {
            oracle_update(0x5f2f89f6);
            if(magic[5] == '0') {
              oracle_update(0x7f6b111b);
              if(magic[6] == '0') {
                oracle_update(0x3f3fbef7);
                if(magic[7] == '0') {
                  oracle_update(0x5f6efd7f);
                  if(magic[8] == '0') {
                    oracle_update(0x6f4fe565);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7b47e87b);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5ee9f00d);
                  if(magic[8] == '0') {
                    oracle_update(0x7f3f81b8);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1ff981ab);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6df9ad57);
                if(magic[7] == '0') {
                  oracle_update(0x2ffe2549);
                  if(magic[8] == '0') {
                    oracle_update(0x4b7281a9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3fffb690);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x1c8fbf9c);
                  if(magic[8] == '0') {
                    oracle_update(0x6bff6c39);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x72db791c);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7ffb991c);
              if(magic[6] == '0') {
                oracle_update(0x7fbf7366);
                if(magic[7] == '0') {
                  oracle_update(0x7778cf16);
                  if(magic[8] == '0') {
                    oracle_update(0x2acf53a1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bffa732);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7d072cec);
                  if(magic[8] == '0') {
                    oracle_update(0x7e3bc3ac);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bf7dc8a);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x6eb5ad76);
                if(magic[7] == '0') {
                  oracle_update(0x76eab4c0);
                  if(magic[8] == '0') {
                    oracle_update(0x7ebf87c4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3ff2640d);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x74ff5b81);
                  if(magic[8] == '0') {
                    oracle_update(0x7f75391d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6f7f80af);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x3bfee3c8);
            if(magic[5] == '0') {
              oracle_update(0x173b3048);
              if(magic[6] == '0') {
                oracle_update(0x7fbf3853);
                if(magic[7] == '0') {
                  oracle_update(0x7ffd3bc2);
                  if(magic[8] == '0') {
                    oracle_update(0x1edfc234);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6dbbe0b1);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6ab30e5f);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffc84d4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x67dd8f3f);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x3cb16ff0);
                if(magic[7] == '0') {
                  oracle_update(0x1fef0b2d);
                  if(magic[8] == '0') {
                    oracle_update(0x467f9592);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77dff16e);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6f952ae0);
                  if(magic[8] == '0') {
                    oracle_update(0x67df1651);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ecbac1a);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7e4b31d4);
              if(magic[6] == '0') {
                oracle_update(0x5bfef30e);
                if(magic[7] == '0') {
                  oracle_update(0x7fef7e80);
                  if(magic[8] == '0') {
                    oracle_update(0x7bff8d9a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x774d682c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x379d85d);
                  if(magic[8] == '0') {
                    oracle_update(0x79674eff);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x74f7bde6);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x775f7faf);
                if(magic[7] == '0') {
                  oracle_update(0x3b9d9ec0);
                  if(magic[8] == '0') {
                    oracle_update(0x56cf7da8);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ff3ac28);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f690d03);
                  if(magic[8] == '0') {
                    oracle_update(0x3edf5127);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6ffdd549);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x7bd61f1d);
          if(magic[4] == '0') {
            oracle_update(0x3eff558c);
            if(magic[5] == '0') {
              oracle_update(0x7cdb90fc);
              if(magic[6] == '0') {
                oracle_update(0x7e6d1ee7);
                if(magic[7] == '0') {
                  oracle_update(0x5f7fb5c2);
                  if(magic[8] == '0') {
                    oracle_update(0x53db9603);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3dfa5748);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fdb433a);
                  if(magic[8] == '0') {
                    oracle_update(0x5bff1857);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fd72154);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7bfd9644);
                if(magic[7] == '0') {
                  oracle_update(0x5f6f1596);
                  if(magic[8] == '0') {
                    oracle_update(0x7dea2c56);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1beaafb6);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3bd73283);
                  if(magic[8] == '0') {
                    oracle_update(0x5fef7d4d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bffac9a);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x3df7a57d);
              if(magic[6] == '0') {
                oracle_update(0x5bbcb234);
                if(magic[7] == '0') {
                  oracle_update(0x6def7ed6);
                  if(magic[8] == '0') {
                    oracle_update(0x4affaf1c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5dde5c2e);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f6fd6b7);
                  if(magic[8] == '0') {
                    oracle_update(0x7e9b597d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5fffd4df);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7bd6e0ee);
                if(magic[7] == '0') {
                  oracle_update(0x7bffd3c6);
                  if(magic[8] == '0') {
                    oracle_update(0x7fa53c08);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5fa78deb);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3aff1b2b);
                  if(magic[8] == '0') {
                    oracle_update(0x3fafaddf);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fb6a08b);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x6d2b0696);
            if(magic[5] == '0') {
              oracle_update(0x6faf432f);
              if(magic[6] == '0') {
                oracle_update(0x3ff95898);
                if(magic[7] == '0') {
                  oracle_update(0x5f891cc9);
                  if(magic[8] == '0') {
                    oracle_update(0x4ff3192f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ff75eb9);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x39db1e71);
                  if(magic[8] == '0') {
                    oracle_update(0x73c7de5a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x144fdf70);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x3fadedf9);
                if(magic[7] == '0') {
                  oracle_update(0x2ffe6d1e);
                  if(magic[8] == '0') {
                    oracle_update(0x2eb892d0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0xf274d57);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7d751efd);
                  if(magic[8] == '0') {
                    oracle_update(0x59ffeaf6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x79f31b05);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x69613256);
              if(magic[6] == '0') {
                oracle_update(0x3e861c18);
                if(magic[7] == '0') {
                  oracle_update(0x6bff4cca);
                  if(magic[8] == '0') {
                    oracle_update(0x1a370eb8);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f37982e);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ffb9f38);
                  if(magic[8] == '0') {
                    oracle_update(0x78f59147);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6f2d3f5a);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5f3fe03b);
                if(magic[7] == '0') {
                  oracle_update(0x6f8fde9c);
                  if(magic[8] == '0') {
                    oracle_update(0x5fdfee15);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5d475a7f);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3dbf87ca);
                  if(magic[8] == '0') {
                    oracle_update(0x7bfd307a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fcbdfd7);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      } else {
        oracle_update(0x1bdfa00c);
        if(magic[3] == '0') {
          oracle_update(0x5f667dcd);
          if(magic[4] == '0') {
            oracle_update(0x1b5fd077);
            if(magic[5] == '0') {
              oracle_update(0x7ef6cef0);
              if(magic[6] == '0') {
                oracle_update(0x5f2f1fa6);
                if(magic[7] == '0') {
                  oracle_update(0x1cfea94c);
                  if(magic[8] == '0') {
                    oracle_update(0x6fa9f2dd);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fde7b30);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5fd76f69);
                  if(magic[8] == '0') {
                    oracle_update(0x73ffbe9e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5ff0dbe7);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5ff3d2a9);
                if(magic[7] == '0') {
                  oracle_update(0x7fefcdda);
                  if(magic[8] == '0') {
                    oracle_update(0x77fee9c7);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x297f618b);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x2bffa38e);
                  if(magic[8] == '0') {
                    oracle_update(0x5dbf2330);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7eb26ed0);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7fdc3d03);
              if(magic[6] == '0') {
                oracle_update(0x1bacfa13);
                if(magic[7] == '0') {
                  oracle_update(0x7df5015c);
                  if(magic[8] == '0') {
                    oracle_update(0x7de9f3c3);
                    oracle_get_flag();
                  } else {
                    oracle_update(0xeff9a1d);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7e6d8048);
                  if(magic[8] == '0') {
                    oracle_update(0x15bf740c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x597f525a);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x325fbacb);
                if(magic[7] == '0') {
                  oracle_update(0x7fe2ac7d);
                  if(magic[8] == '0') {
                    oracle_update(0x7a23a6bd);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ef9fe16);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7b7be4ab);
                  if(magic[8] == '0') {
                    oracle_update(0x5fbea7e3);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5fed20e1);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x555f4a30);
            if(magic[5] == '0') {
              oracle_update(0x7bfe491c);
              if(magic[6] == '0') {
                oracle_update(0x7be7ac50);
                if(magic[7] == '0') {
                  oracle_update(0x7bcfc4fe);
                  if(magic[8] == '0') {
                    oracle_update(0x5bde1c7d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7d916bf7);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0xb1ef13d);
                  if(magic[8] == '0') {
                    oracle_update(0x7b1ff6b2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4fde2c89);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7abb3555);
                if(magic[7] == '0') {
                  oracle_update(0x3b1f4c6e);
                  if(magic[8] == '0') {
                    oracle_update(0x6ef9711d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6eb7b536);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x733f1dbb);
                  if(magic[8] == '0') {
                    oracle_update(0x364f0aa5);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x754fc635);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x76cf1ea6);
              if(magic[6] == '0') {
                oracle_update(0x3fdffd08);
                if(magic[7] == '0') {
                  oracle_update(0x7ffe0796);
                  if(magic[8] == '0') {
                    oracle_update(0x7f692b06);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7b778374);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7df384c3);
                  if(magic[8] == '0') {
                    oracle_update(0x5fdf39c9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7dee0134);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x3f9f198b);
                if(magic[7] == '0') {
                  oracle_update(0x7f7b692f);
                  if(magic[8] == '0') {
                    oracle_update(0x60bf82a8);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fcfb7bf);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x2edf7a90);
                  if(magic[8] == '0') {
                    oracle_update(0x7abfdd37);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7cebc54c);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x7f9f28e0);
          if(magic[4] == '0') {
            oracle_update(0x6e7713c9);
            if(magic[5] == '0') {
              oracle_update(0x3bfc9e95);
              if(magic[6] == '0') {
                oracle_update(0x3fefb09c);
                if(magic[7] == '0') {
                  oracle_update(0x7affd791);
                  if(magic[8] == '0') {
                    oracle_update(0x7bb474b2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x39f3d4d0);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x9ffd15d);
                  if(magic[8] == '0') {
                    oracle_update(0x6ffd7922);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x59fd4bdd);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7fffec93);
                if(magic[7] == '0') {
                  oracle_update(0x35eb8be5);
                  if(magic[8] == '0') {
                    oracle_update(0x6a7f8f6e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x437f7e8c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x76fbf21c);
                  if(magic[8] == '0') {
                    oracle_update(0x3bd7251a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7edd987d);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x5b7f7c8d);
              if(magic[6] == '0') {
                oracle_update(0x6af2738f);
                if(magic[7] == '0') {
                  oracle_update(0x1dd5ef31);
                  if(magic[8] == '0') {
                    oracle_update(0x713ea513);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3bf1ef33);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x76746264);
                  if(magic[8] == '0') {
                    oracle_update(0x5fdcf1bf);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7967bf63);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x5d8792ca);
                if(magic[7] == '0') {
                  oracle_update(0x7bbf0dd8);
                  if(magic[8] == '0') {
                    oracle_update(0x7fefefb1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f769ef3);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x779f64f5);
                  if(magic[8] == '0') {
                    oracle_update(0x7fe94fc3);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fbfc69c);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x5fef3476);
            if(magic[5] == '0') {
              oracle_update(0x6f7f72a2);
              if(magic[6] == '0') {
                oracle_update(0x4fbbecab);
                if(magic[7] == '0') {
                  oracle_update(0x7ad74a2b);
                  if(magic[8] == '0') {
                    oracle_update(0x47ff9582);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1fec2fd9);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7e3b04f2);
                  if(magic[8] == '0') {
                    oracle_update(0x1fae9cc6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bf6f8e3);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x25df0228);
                if(magic[7] == '0') {
                  oracle_update(0x7fbf666e);
                  if(magic[8] == '0') {
                    oracle_update(0x7e367cc9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x777fc648);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x73ff2fd2);
                  if(magic[8] == '0') {
                    oracle_update(0x79fdbc30);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5ed5f204);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x3ff1e6bd);
              if(magic[6] == '0') {
                oracle_update(0x7be3d7f1);
                if(magic[7] == '0') {
                  oracle_update(0x7f2fdfa1);
                  if(magic[8] == '0') {
                    oracle_update(0x73df7ab6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6bff4020);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x75b55436);
                  if(magic[8] == '0') {
                    oracle_update(0x7ef7d19e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fc7e0dd);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7bffe3d2);
                if(magic[7] == '0') {
                  oracle_update(0x5cdbc122);
                  if(magic[8] == '0') {
                    oracle_update(0x67ef76a6);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ff58e37);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6ef75b4b);
                  if(magic[8] == '0') {
                    oracle_update(0x7f7fe40f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7dfe8ade);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      }
    } else {
      oracle_update(0x5ef75bfd);
      if(magic[2] == '0') {
        oracle_update(0x7fe6f6c8);
        if(magic[3] == '0') {
          oracle_update(0x7bfa229d);
          if(magic[4] == '0') {
            oracle_update(0x6fdf7846);
            if(magic[5] == '0') {
              oracle_update(0x3fd3954);
              if(magic[6] == '0') {
                oracle_update(0x77976ff7);
                if(magic[7] == '0') {
                  oracle_update(0x1fb7b8bf);
                  if(magic[8] == '0') {
                    oracle_update(0x7b97f040);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3aff8836);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x6ffd3e1e);
                  if(magic[8] == '0') {
                    oracle_update(0x1fa6366d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x353bb93b);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x3eff8aa4);
                if(magic[7] == '0') {
                  oracle_update(0x4ebea194);
                  if(magic[8] == '0') {
                    oracle_update(0x73fef889);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f83551a);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7cbfd1e6);
                  if(magic[8] == '0') {
                    oracle_update(0x74fbde49);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x773f15fd);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7fdf93f6);
              if(magic[6] == '0') {
                oracle_update(0x6f1f369b);
                if(magic[7] == '0') {
                  oracle_update(0x30f5a29f);
                  if(magic[8] == '0') {
                    oracle_update(0x7eff2856);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x77ddc575);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x764b2c73);
                  if(magic[8] == '0') {
                    oracle_update(0x7bff55a1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3657bb44);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x4def9c71);
                if(magic[7] == '0') {
                  oracle_update(0x3eff7b59);
                  if(magic[8] == '0') {
                    oracle_update(0x4fff2623);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5bfe92b0);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5f69834d);
                  if(magic[8] == '0') {
                    oracle_update(0x6ebb9e50);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x1fbe83c5);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x37cfc0af);
            if(magic[5] == '0') {
              oracle_update(0x6d9d6624);
              if(magic[6] == '0') {
                oracle_update(0x6fff702b);
                if(magic[7] == '0') {
                  oracle_update(0x6fcce79c);
                  if(magic[8] == '0') {
                    oracle_update(0xffbd845);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6ffb1b97);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x69615c1e);
                  if(magic[8] == '0') {
                    oracle_update(0x1eba8d15);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fd6c1e8);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x57ff8249);
                if(magic[7] == '0') {
                  oracle_update(0x7eaaaaee);
                  if(magic[8] == '0') {
                    oracle_update(0x359f5455);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x37973a59);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x1bffbc0e);
                  if(magic[8] == '0') {
                    oracle_update(0x3f9f5e22);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x50d78b9e);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x5dcb51de);
              if(magic[6] == '0') {
                oracle_update(0x7ff386cb);
                if(magic[7] == '0') {
                  oracle_update(0x5fdf4085);
                  if(magic[8] == '0') {
                    oracle_update(0x4ffaa674);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7db7806d);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7a77d360);
                  if(magic[8] == '0') {
                    oracle_update(0x7df7f766);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ffac85c);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x1ffd8922);
                if(magic[7] == '0') {
                  oracle_update(0x75a7df0a);
                  if(magic[8] == '0') {
                    oracle_update(0x7daa852e);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5bce27bd);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7eaf9a5a);
                  if(magic[8] == '0') {
                    oracle_update(0x677e789a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fdbb20e);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x4afdb9dc);
          if(magic[4] == '0') {
            oracle_update(0x7763207f);
            if(magic[5] == '0') {
              oracle_update(0x7f764f7e);
              if(magic[6] == '0') {
                oracle_update(0x7f7f4ba4);
                if(magic[7] == '0') {
                  oracle_update(0x5fdb5b54);
                  if(magic[8] == '0') {
                    oracle_update(0x58dfb77d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4db75f91);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x58fedc6d);
                  if(magic[8] == '0') {
                    oracle_update(0x6c9ba277);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f7dca32);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x75bd9a38);
                if(magic[7] == '0') {
                  oracle_update(0x7fe808b3);
                  if(magic[8] == '0') {
                    oracle_update(0x7ecd387c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x459f296b);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3fff8dad);
                  if(magic[8] == '0') {
                    oracle_update(0x3fde54e1);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x75e91d17);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x775fc4c7);
              if(magic[6] == '0') {
                oracle_update(0x7fb44336);
                if(magic[7] == '0') {
                  oracle_update(0x6fdfe29d);
                  if(magic[8] == '0') {
                    oracle_update(0x7b7d061d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fc5f76a);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3e645bca);
                  if(magic[8] == '0') {
                    oracle_update(0x7dbbd936);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3fe71b0d);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x3d2f8b5c);
                if(magic[7] == '0') {
                  oracle_update(0x5ffe4b89);
                  if(magic[8] == '0') {
                    oracle_update(0x7efe1ad2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x62db81e2);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5f7d237b);
                  if(magic[8] == '0') {
                    oracle_update(0x33efee4c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bf3e44b);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x61bd171d);
            if(magic[5] == '0') {
              oracle_update(0x1effd79c);
              if(magic[6] == '0') {
                oracle_update(0x7fffadc5);
                if(magic[7] == '0') {
                  oracle_update(0x73356758);
                  if(magic[8] == '0') {
                    oracle_update(0x37db0196);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fffea5d);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fdf812f);
                  if(magic[8] == '0') {
                    oracle_update(0x77ae6556);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3cef9adb);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7d9e38a4);
                if(magic[7] == '0') {
                  oracle_update(0x12470b89);
                  if(magic[8] == '0') {
                    oracle_update(0x5fdfb91a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x664e3471);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7dbd9cd5);
                  if(magic[8] == '0') {
                    oracle_update(0x3dfb7950);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x79ef0951);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x779fb1a1);
              if(magic[6] == '0') {
                oracle_update(0x57bf6fe8);
                if(magic[7] == '0') {
                  oracle_update(0x6e9e4d81);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffdef0c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x47bb7cf0);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x70ff4db5);
                  if(magic[8] == '0') {
                    oracle_update(0x4bdfc082);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x57fe26a7);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x3dff7d4e);
                if(magic[7] == '0') {
                  oracle_update(0x2fdf9ee1);
                  if(magic[8] == '0') {
                    oracle_update(0x7f76dac8);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x28aa6ec1);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7e9fc454);
                  if(magic[8] == '0') {
                    oracle_update(0x7f7fdc7b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x57ff6edf);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        }
      } else {
        oracle_update(0x79dda6d2);
        if(magic[3] == '0') {
          oracle_update(0x1fe78249);
          if(magic[4] == '0') {
            oracle_update(0x77df392e);
            if(magic[5] == '0') {
              oracle_update(0x37ced6a5);
              if(magic[6] == '0') {
                oracle_update(0x5fdfd2f2);
                if(magic[7] == '0') {
                  oracle_update(0x7e7dc087);
                  if(magic[8] == '0') {
                    oracle_update(0x5e7196e9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5f3e821f);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x2fe7f71d);
                  if(magic[8] == '0') {
                    oracle_update(0x7eff0dcb);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7cff9a11);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x67ff49ea);
                if(magic[7] == '0') {
                  oracle_update(0x7d3b4f15);
                  if(magic[8] == '0') {
                    oracle_update(0x46ede141);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fc7d4e0);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x1ffa748e);
                  if(magic[8] == '0') {
                    oracle_update(0x7ef7200a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7f7dd9fe);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x7ead2f35);
              if(magic[6] == '0') {
                oracle_update(0x6ddd4d62);
                if(magic[7] == '0') {
                  oracle_update(0x3dbf3eea);
                  if(magic[8] == '0') {
                    oracle_update(0x3fdfdeed);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5feed75a);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x58de8fa9);
                  if(magic[8] == '0') {
                    oracle_update(0x5fffeeec);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7e6f7ac3);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x77dfec78);
                if(magic[7] == '0') {
                  oracle_update(0xf74af70);
                  if(magic[8] == '0') {
                    oracle_update(0x5bb5a68b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6f8792ca);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7335bd99);
                  if(magic[8] == '0') {
                    oracle_update(0x6fc73c91);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6dfb6118);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x197f4989);
            if(magic[5] == '0') {
              oracle_update(0x7fdfc530);
              if(magic[6] == '0') {
                oracle_update(0x7ffdb822);
                if(magic[7] == '0') {
                  oracle_update(0x3eca32bd);
                  if(magic[8] == '0') {
                    oracle_update(0x5b7e5ae5);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6337cfb9);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ef9290e);
                  if(magic[8] == '0') {
                    oracle_update(0x69fc0032);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fce2f95);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7ede2ac0);
                if(magic[7] == '0') {
                  oracle_update(0x7f667c06);
                  if(magic[8] == '0') {
                    oracle_update(0x6777384d);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5ef53c04);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x45ef8a54);
                  if(magic[8] == '0') {
                    oracle_update(0x5bd7e2a7);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5e22676e);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x6dfbd85e);
              if(magic[6] == '0') {
                oracle_update(0x3fff0a97);
                if(magic[7] == '0') {
                  oracle_update(0x6b8f3619);
                  if(magic[8] == '0') {
                    oracle_update(0x55f76cf0);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3fda6103);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5acff613);
                  if(magic[8] == '0') {
                    oracle_update(0x7fdd3cca);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7bce2592);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7bff7654);
                if(magic[7] == '0') {
                  oracle_update(0x7ffec018);
                  if(magic[8] == '0') {
                    oracle_update(0x6fddc54b);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7a5c665c);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x3ffacf2f);
                  if(magic[8] == '0') {
                    oracle_update(0x4ddcba05);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4ff4d556);
                    oracle_get_flag();
                  }
                }
              }
            }
          }
        } else {
          oracle_update(0x7cee76f1);
          if(magic[4] == '0') {
            oracle_update(0x374d824e);
            if(magic[5] == '0') {
              oracle_update(0x6bee6112);
              if(magic[6] == '0') {
                oracle_update(0x767f2997);
                if(magic[7] == '0') {
                  oracle_update(0x68ef5b2a);
                  if(magic[8] == '0') {
                    oracle_update(0x55ebaaab);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fef7d9a);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x4ffe49db);
                  if(magic[8] == '0') {
                    oracle_update(0x6bfd0ed9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3def8c50);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x778c156f);
                if(magic[7] == '0') {
                  oracle_update(0x2b3f4b16);
                  if(magic[8] == '0') {
                    oracle_update(0x6f67b1a4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x4dd69f7e);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7fffdbf2);
                  if(magic[8] == '0') {
                    oracle_update(0x1e6fde56);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fff55df);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x56fd4b19);
              if(magic[6] == '0') {
                oracle_update(0x6edd3d8e);
                if(magic[7] == '0') {
                  oracle_update(0xe9b8ec1);
                  if(magic[8] == '0') {
                    oracle_update(0x6b7745b5);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3feea724);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7bde1475);
                  if(magic[8] == '0') {
                    oracle_update(0x76ff92a9);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x6fbf65d4);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x33fb9caf);
                if(magic[7] == '0') {
                  oracle_update(0x3ff31ec0);
                  if(magic[8] == '0') {
                    oracle_update(0x7ffc8512);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7d3a59d0);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x5e1f54fa);
                  if(magic[8] == '0') {
                    oracle_update(0x3fd793a4);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2f765401);
                    oracle_get_flag();
                  }
                }
              }
            }
          } else {
            oracle_update(0x5e9f5231);
            if(magic[5] == '0') {
              oracle_update(0x5bbd625d);
              if(magic[6] == '0') {
                oracle_update(0x7fd62e50);
                if(magic[7] == '0') {
                  oracle_update(0x757e10d7);
                  if(magic[8] == '0') {
                    oracle_update(0x3fded435);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7dbfe92d);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7f7b8fc4);
                  if(magic[8] == '0') {
                    oracle_update(0x776f7eca);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7fff2a35);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7ffb710b);
                if(magic[7] == '0') {
                  oracle_update(0x4cff43ed);
                  if(magic[8] == '0') {
                    oracle_update(0x7dff3dd2);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x5bbbc4ba);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7ebb5666);
                  if(magic[8] == '0') {
                    oracle_update(0x3eebd09f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x3f9d6770);
                    oracle_get_flag();
                  }
                }
              }
            } else {
              oracle_update(0x3ffe5771);
              if(magic[6] == '0') {
                oracle_update(0x5ebff1ca);
                if(magic[7] == '0') {
                  oracle_update(0x7aa6f222);
                  if(magic[8] == '0') {
                    oracle_update(0x177ed17c);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x2f9f98d3);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x4fff4f01);
                  if(magic[8] == '0') {
                    oracle_update(0x6fbfdb4a);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7ffbbc19);
                    oracle_get_flag();
                  }
                }
              } else {
                oracle_update(0x7ed97e18);
                if(magic[7] == '0') {
                  oracle_update(0x7aff06e1);
                  if(magic[8] == '0') {
                    oracle_update(0x657ecad8);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x57e99f73);
                    oracle_get_flag();
                  }
                } else {
                  oracle_update(0x7efc32db);
                  if(magic[8] == '0') {
                    oracle_update(0x7efd450f);
                    oracle_get_flag();
                  } else {
                    oracle_update(0x7b7f9ccd);
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
