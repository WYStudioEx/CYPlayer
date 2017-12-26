//
//  CYVideoPlayerPreviewView.h
//  CYVideoPlayerProject
//
//  Created by yellowei on 2017/12/4.
//  Copyright © 2017年 yellowei. All rights reserved.
//

#import "CYVideoPlayerBaseView.h"
#import "CYVideoPreviewModel.h"

NS_ASSUME_NONNULL_BEGIN

@protocol CYVideoPlayerPreviewViewDelegate;

@interface CYVideoPlayerPreviewView : CYVideoPlayerBaseView

@property (nonatomic, weak, readwrite, nullable) id<CYVideoPlayerPreviewViewDelegate> delegate;

@property (nonatomic, strong, readwrite) NSArray<CYVideoPreviewModel *> *previewImages;

@end

@protocol CYVideoPlayerPreviewViewDelegate <NSObject>
			
@optional
- (void)previewView:(CYVideoPlayerPreviewView *)view didSelectItem:(CYVideoPreviewModel *)item;

@end

NS_ASSUME_NONNULL_END
