/***************************************************
 * file: github/elh/rpn-cnc/cnc-dictionary.h
 *
 * @file    cnc-dictionary.h
 * @author  Eric L. Hernes
 * @born_on   Friday, May 19, 2023
 * @copyright (C) Copyright Eric L. Hernes 2023
 * @copyright (C) Copyright Q, Inc. 2023
 *
 * @brief   An Eric L. Hernes Signature Series C/C++ header
 *
 * $Id$
 */

#pragma once

class MachineInterface {
public:
  MachineInterface(RpnController &rpn);
  ~MachineInterface();

  struct Privates;
private:
  Privates *m_p;
};

/* end of github/elh/rpn-cnc/cnc-dictionary.h */