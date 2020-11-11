/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>

@class UIColor, PUBrowsingViewModel, _UIContentUnavailableView, NSString;

@interface PUBrowsingBackgroundTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver> {

	BOOL _shouldDisplayEmptyPlaceholder;
	BOOL __needsUpdateColor;
	UIColor* _backgroundColorOverride;
	PUBrowsingViewModel* _viewModel;
	/*^block*/id __nextColorUpdateAnimatorBlock;
	_UIContentUnavailableView* __emptyPlaceholderView;
	CGRect __emptyPlaceholderFrame;

}

@property (assign,setter=_setNeedsUpdateColor:,nonatomic) BOOL _needsUpdateColor;                                             //@synthesize _needsUpdateColor=__needsUpdateColor - In the implementation block
@property (setter=_setNextColorUpdateAnimatorBlock:,nonatomic,copy) id _nextColorUpdateAnimatorBlock;                         //@synthesize _nextColorUpdateAnimatorBlock=__nextColorUpdateAnimatorBlock - In the implementation block
@property (setter=_setEmptyPlaceholderView:,nonatomic,retain) _UIContentUnavailableView * _emptyPlaceholderView;              //@synthesize _emptyPlaceholderView=__emptyPlaceholderView - In the implementation block
@property (assign,setter=_setEmptyPlaceholderFrame:,nonatomic) CGRect _emptyPlaceholderFrame;                                 //@synthesize _emptyPlaceholderFrame=__emptyPlaceholderFrame - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorOverride;                                                               //@synthesize backgroundColorOverride=_backgroundColorOverride - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayEmptyPlaceholder;                                                              //@synthesize shouldDisplayEmptyPlaceholder=_shouldDisplayEmptyPlaceholder - In the implementation block
@property (nonatomic,retain) PUBrowsingViewModel * viewModel;                                                                 //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(BOOL)_needsUpdateColor;
-(void)applyLayoutInfo:(id)arg1 ;
-(PUBrowsingViewModel *)viewModel;
-(void)setViewModel:(PUBrowsingViewModel *)arg1 ;
-(void)setBackgroundColorOverride:(UIColor *)arg1 ;
-(void)setShouldDisplayEmptyPlaceholder:(BOOL)arg1 ;
-(void)_setNextColorUpdateAnimatorBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldDisplayEmptyPlaceholder;
-(UIColor *)backgroundColorOverride;
-(void)_invalidateColorWithAnimatorBlock:(/*^block*/id)arg1 ;
-(void)_setNeedsUpdateColor:(BOOL)arg1 ;
-(id)_nextColorUpdateAnimatorBlock;
-(void)_setEmptyPlaceholderView:(id)arg1 ;
-(void)_invalidateColor;
-(_UIContentUnavailableView *)_emptyPlaceholderView;
-(void)viewDidLoad;
-(CGRect)_emptyPlaceholderFrameForLayoutInfo:(id)arg1 ;
-(void)_updateEmptyPlaceholderAnimated:(BOOL)arg1 ;
-(void)_updateColorIfNeeded;
-(CGRect)_emptyPlaceholderFrame;
-(void)_setEmptyPlaceholderFrame:(CGRect)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end
