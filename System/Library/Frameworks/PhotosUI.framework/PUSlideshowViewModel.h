/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUViewModel.h>

@interface PUSlideshowViewModel : PUViewModel {

	BOOL _wantsChromeVisible;
	long long _currentState;

}

@property (assign,nonatomic) long long currentState;                                             //@synthesize currentState=_currentState - In the implementation block
@property (assign,setter=setWantsChromeVisible:,nonatomic) BOOL wantsChromeVisible;              //@synthesize wantsChromeVisible=_wantsChromeVisible - In the implementation block
-(long long)currentState;
-(void)registerChangeObserver:(id)arg1 ;
-(id)currentChange;
-(void)unregisterChangeObserver:(id)arg1 ;
-(void)setCurrentState:(long long)arg1 ;
-(id)newViewModelChange;
-(BOOL)wantsChromeVisible;
-(void)setWantsChromeVisible:(BOOL)arg1 ;
-(void)setWantsChromeVisible:(BOOL)arg1 changeReason:(long long)arg2 ;
@end

