//
// Created by jose on 24/12/2020.
//

#ifndef CALCULO_DIGITO_VERIFICADOR_RG_CONTA_H
#define CALCULO_DIGITO_VERIFICADOR_RG_CONTA_H
#include <iostream>
using namespace std;
class Conta {
public:
    void entrada(int num) {
        popula(num);
        conta();
        imprimir();
    }

private:
    int rg[9]; // vetor que armasena os valores do RG

    int conta(){
        int val = 0, c = 9;
        for (int i = 0; i < 8; i++) {
            val = val + (rg[i] * c);
            c--;
        }
        rg[8] = val%11;
        if(val%11 == 10){
            return 'X';
        }
        else {
            return val % 11;
        }
    }

    void popula(int num){
        // para a posição 0
        if (num >= 10000000) {
            if (num >= 20000000) {
                if (num >= 30000000) {
                    if (num >= 40000000) {
                        if (num >= 50000000) {
                            if (num >= 60000000) {
                                if (num >= 70000000) {
                                    if (num >= 80000000) {
                                        if (num >= 90000000) {
                                            rg[0] = 9;
                                            num = num - 90000000;
                                        } else {
                                            rg[0] = 8;
                                            num = num - 80000000;
                                        }
                                    } else {
                                        rg[0] = 7;
                                        num = num - 70000000;
                                    }
                                } else {
                                    rg[0] = 6;
                                    num = num - 60000000;
                                }
                            } else {
                                rg[0] = 5;
                                num = num - 50000000;
                            }
                        } else {
                            rg[0] = 4;
                            num = num - 40000000;
                        }
                    } else {
                        rg[0] = 3;
                        num = num - 30000000;
                    }
                } else {
                    rg[0] = 2;
                    num = num - 20000000;
                }
            } else {
                rg[0] = 1;
                num = num - 10000000;
            }
        } else {
            rg[0] = 0;
        }
        // para a posição 1
        if (num >= 1000000) {
            if (num >= 2000000) {
                if (num >= 3000000) {
                    if (num >= 4000000) {
                        if (num >= 5000000) {
                            if (num >= 6000000) {
                                if (num >= 7000000) {
                                    if (num >= 8000000) {
                                        if (num >= 9000000) {
                                            rg[1] = 9;
                                            num = num - 9000000;
                                        } else {
                                            rg[1] = 8;
                                            num = num - 8000000;
                                        }
                                    } else {
                                        rg[1] = 7;
                                        num = num - 7000000;
                                    }
                                } else {
                                    rg[1] = 6;
                                    num = num - 6000000;
                                }
                            } else {
                                rg[1] = 5;
                                num = num - 5000000;
                            }
                        } else {
                            rg[1] = 4;
                            num = num - 4000000;
                        }
                    } else {
                        rg[1] = 3;
                        num = num - 3000000;
                    }
                } else {
                    rg[1] = 2;
                    num = num - 2000000;
                }
            } else {
                rg[1] = 1;
                num = num - 1000000;
            }
        } else {
            rg[1] = 0;
        }
        // para a posição 2
        if (num >= 100000) {
            if (num >= 200000) {
                if (num >= 300000) {
                    if (num >= 400000) {
                        if (num >= 500000) {
                            if (num >= 600000) {
                                if (num >= 700000) {
                                    if (num >= 800000) {
                                        if (num >= 900000) {
                                            num = num - 900000;
                                            rg[2] = 9;
                                        } else {
                                            num = num - 800000;
                                            rg[2] = 8;
                                        }
                                    } else {
                                        rg[2] = 7;
                                        num = num - 700000;
                                    }
                                } else {
                                    rg[2] = 6;
                                    num = num - 600000;
                                }
                            } else {
                                num = num - 500000;
                                rg[2] = 5;
                            }
                        } else {
                            num = num - 400000;
                            rg[2] = 4;
                        }
                    } else {
                        num = num - 300000;
                        rg[2] = 3;
                    }
                } else {
                    num = num - 200000;
                    rg[2] = 2;
                }
            } else {
                num = num - 100000;
                rg[2] = 1;
            }
        } else {
            rg[2] = 0;
        }
        // para a posição 3
        if (num >= 10000) {
            if (num >= 20000) {
                if (num >= 30000) {
                    if (num >= 40000) {
                        if (num >= 50000) {
                            if (num >= 60000) {
                                if (num >= 70000) {
                                    if (num >= 80000) {
                                        if (num >= 90000) {
                                            num = num - 90000;
                                            rg[3] = 9;
                                        } else {
                                            num = num - 80000;
                                            rg[3] = 8;
                                        }
                                    } else {
                                        rg[3] = 7;
                                        num = num - 70000;
                                    }
                                } else {
                                    rg[3] = 6;
                                    num = num - 60000;
                                }
                            } else {
                                num = num - 50000;
                                rg[3] = 5;
                            }
                        } else {
                            num = num - 40000;
                            rg[3] = 4;
                        }
                    } else {
                        num = num - 30000;
                        rg[3] = 3;
                    }
                } else {
                    num = num - 20000;
                    rg[3] = 2;
                }
            } else {
                num = num - 10000;
                rg[3] = 1;
            }
        } else {
            rg[3] = 0;
        }
        // para a posição 4
        if (num >= 1000) {
            if (num >= 2000) {
                if (num >= 3000) {
                    if (num >= 4000) {
                        if (num >= 5000) {
                            if (num >= 6000) {
                                if (num >= 7000) {
                                    if (num >= 8000) {
                                        if (num >= 9000) {
                                            num = num - 9000;
                                            rg[4] = 9;
                                        } else {
                                            num = num - 8000;
                                            rg[4] = 8;
                                        }
                                    } else {
                                        rg[4] = 7;
                                        num = num - 7000;
                                    }
                                } else {
                                    rg[4] = 6;
                                    num = num - 6000;
                                }
                            } else {
                                num = num - 5000;
                                rg[4] = 5;
                            }
                        } else {
                            num = num - 4000;
                            rg[4] = 4;
                        }
                    } else {
                        num = num - 3000;
                        rg[4] = 3;
                    }
                } else {
                    num = num - 2000;
                    rg[4] = 2;
                }
            } else {
                num = num - 1000;
                rg[4] = 1;
            }
        } else {
            rg[4] = 0;
        }
        // para a posição 5
        if (num >= 100) {
            if (num >= 200) {
                if (num >= 300) {
                    if (num >= 400) {
                        if (num >= 500) {
                            if (num >= 600) {
                                if (num >= 700) {
                                    if (num >= 800) {
                                        if (num >= 900) {
                                            num = num - 900;
                                            rg[5] = 9;
                                        } else {
                                            num = num - 800;
                                            rg[5] = 8;
                                        }
                                    } else {
                                        rg[5] = 7;
                                        num = num - 700;
                                    }
                                } else {
                                    rg[5] = 6;
                                    num = num - 600;
                                }
                            } else {
                                num = num - 500;
                                rg[5] = 5;
                            }
                        } else {
                            num = num - 400;
                            rg[5] = 4;
                        }
                    } else {
                        num = num - 300;
                        rg[5] = 3;
                    }
                } else {
                    num = num - 200;
                    rg[5] = 2;
                }
            } else {
                num = num - 100;
                rg[5] = 1;
            }
        } else {
            rg[5] = 0;
        }
        // para a posição 6
        if (num >= 10) {
            if (num >= 20) {
                if (num >= 30) {
                    if (num >= 40) {
                        if (num >= 50) {
                            if (num >= 60) {
                                if (num >= 70) {
                                    if (num >= 80) {
                                        if (num >= 90) {
                                            num = num - 90;
                                            rg[6] = 9;
                                        } else {
                                            num = num - 80;
                                            rg[6] = 8;
                                        }
                                    } else {
                                        rg[6] = 7;
                                        num = num - 70;
                                    }
                                } else {
                                    rg[6] = 6;
                                    num = num - 60;
                                }
                            } else {
                                num = num - 50;
                                rg[6] = 5;
                            }
                        } else {
                            num = num - 40;
                            rg[6] = 4;
                        }
                    } else {
                        num = num - 30;
                        rg[6] = 3;
                    }
                } else {
                    num = num - 20;
                    rg[6] = 2;
                }
            } else {
                num = num - 10;
                rg[6] = 1;
            }
        } else {
            rg[6] = 0;
        }
        // para a posição 7
        rg[7] = num;
    }

    void imprimir(){
        for (int i = 0; i < 9; i++) {
            if(rg[i] == 10){
                cout<<"X"<<endl;
            }
            else{
                cout<<rg[i]<<" ";
            }
        }
    }
};


#endif //CALCULO_DIGITO_VERIFICADOR_RG_CONTA_H
