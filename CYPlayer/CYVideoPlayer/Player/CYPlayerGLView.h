//
//  ESGLView.h
//  cyplayer
//
//  Created by yellowei on 22.10.12.
//  Copyright (c) 2018 yellowei . All rights reserved.
//
//  https://github.com/yellowei/cyplayer
//  this file is part of CYPlayer
//  CYPlayer is licenced under the LGPL v3, see lgpl-3.0.txt

#import <UIKit/UIKit.h>

@class CYVideoFrame;
@class CYPlayerDecoder;

@interface CYPlayerGLView : UIView

- (id) initWithFrame:(CGRect)frame
             decoder: (CYPlayerDecoder *) decoder;

- (UIImage*)snapshot;

- (void) render: (CYVideoFrame *) frame;

@end
