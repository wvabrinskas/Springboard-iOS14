/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBPresentationObservationToken.h>

@class SBControlCenterController;

@interface SBControlCenterPresentationObservationToken : SBPresentationObservationToken {

	SBControlCenterController* _controlCenterController;

}

@property (nonatomic,readonly) SBControlCenterController * controlCenterController;              //@synthesize controlCenterController=_controlCenterController - In the implementation block
-(long long)state;
-(void)dealloc;
-(id)initWithControlCenterController:(id)arg1 ;
-(SBControlCenterController *)controlCenterController;
@end

