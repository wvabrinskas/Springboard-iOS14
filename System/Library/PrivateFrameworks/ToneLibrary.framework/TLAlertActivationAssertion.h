/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TLAlert;

@interface TLAlertActivationAssertion : NSObject {

	TLAlert* _alert;
	Aq _activeAcquisitionCount;

}
-(void)acquire;
-(id)description;
-(void)_acquire;
-(void)relinquish;
-(void)dealloc;
-(void)_relinquish;
-(id)initWithAlert:(id)arg1 ;
@end

