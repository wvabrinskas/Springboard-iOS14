/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BYAnalyticsExpressRestore : NSObject {

	BOOL _paneShown;
	BOOL _offeredBackup;
	unsigned long long _restoreChoice;

}

@property (assign,nonatomic) BOOL paneShown;                                //@synthesize paneShown=_paneShown - In the implementation block
@property (assign,nonatomic) unsigned long long restoreChoice;              //@synthesize restoreChoice=_restoreChoice - In the implementation block
@property (assign,nonatomic) BOOL offeredBackup;                            //@synthesize offeredBackup=_offeredBackup - In the implementation block
+(id)sharedInstance;
-(id)init;
-(unsigned long long)restoreChoice;
-(BOOL)paneShown;
-(BOOL)offeredBackup;
-(void)setPaneShown:(BOOL)arg1 ;
-(void)setRestoreChoice:(unsigned long long)arg1 ;
-(void)setOfferedBackup:(BOOL)arg1 ;
-(id)eventPayload;
@end

