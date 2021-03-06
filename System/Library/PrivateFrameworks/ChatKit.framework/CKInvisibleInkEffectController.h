/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CKInvisibleInkEffectViewDelegate.h>

@protocol CKInvisibleInkEffectHostView;
@class CKInvisibleInkEffectView, UIView, NSTimer, NSString;

@interface CKInvisibleInkEffectController : NSObject <CKInvisibleInkEffectViewDelegate> {

	BOOL _enabled;
	BOOL _paused;
	BOOL _suspended;
	BOOL _effectViewNeedsReset;
	CKInvisibleInkEffectView* _effectView;
	UIView*<CKInvisibleInkEffectHostView> _hostView;
	NSTimer* _resumeTimer;
	UIView* _borrowedEffectViewSnapshot;

}

@property (nonatomic,retain) CKInvisibleInkEffectView * effectView;                              //@synthesize effectView=_effectView - In the implementation block
@property (assign,nonatomic,__weak) UIView*<CKInvisibleInkEffectHostView> hostView;              //@synthesize hostView=_hostView - In the implementation block
@property (assign,nonatomic) BOOL effectViewNeedsReset;                                          //@synthesize effectViewNeedsReset=_effectViewNeedsReset - In the implementation block
@property (nonatomic,retain) NSTimer * resumeTimer;                                              //@synthesize resumeTimer=_resumeTimer - In the implementation block
@property (nonatomic,retain) UIView * borrowedEffectViewSnapshot;                                //@synthesize borrowedEffectViewSnapshot=_borrowedEffectViewSnapshot - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                        //@synthesize paused=_paused - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                                  //@synthesize suspended=_suspended - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPaused:(BOOL)arg1 ;
-(CKInvisibleInkEffectView *)effectView;
-(void)setEffectView:(CKInvisibleInkEffectView *)arg1 ;
-(void)prepareForDisplay;
-(UIView*<CKInvisibleInkEffectHostView>)hostView;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHostView:(UIView*<CKInvisibleInkEffectHostView>)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)isPaused;
-(void)returnBorrowedEffectView;
-(id)borrowEffectView;
-(void)hostViewDidLayoutSubviews;
-(id)initWithHostView:(id)arg1 ;
-(BOOL)isSuspended;
-(BOOL)isEnabled;
-(void)hostViewDidUpdateSnapshot:(id)arg1 ;
-(void)suspendForTimeInterval:(double)arg1 ;
-(NSTimer *)resumeTimer;
-(void)dealloc;
-(void)resumeTimerFired:(id)arg1 ;
-(void)setEffectViewNeedsReset:(BOOL)arg1 ;
-(void)setResumeTimer:(NSTimer *)arg1 ;
-(BOOL)effectViewNeedsReset;
-(void)setBorrowedEffectViewSnapshot:(UIView *)arg1 ;
-(UIView *)borrowedEffectViewSnapshot;
-(void)_updateBorrowedEffectViewSnapshot;
-(void)invisibleInkEffectViewWasUncovered:(id)arg1 ;
-(void)updateBorrowedEffectViewSnapshot;
@end

