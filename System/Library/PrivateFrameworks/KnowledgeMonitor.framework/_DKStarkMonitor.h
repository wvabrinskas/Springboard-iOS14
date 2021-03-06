/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/CARSessionObserving.h>

@class CARSessionStatus, NSString;

@interface _DKStarkMonitor : _DKMonitor <CARSessionObserving> {

	CARSessionStatus* _sessionStatus;

}

@property (nonatomic,retain) CARSessionStatus * sessionStatus;              //@synthesize sessionStatus=_sessionStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entitlements;
+(id)eventStream;
+(id)_eventWithState:(BOOL)arg1 ;
-(void)synchronouslyReflectCurrentValue;
-(void)sessionDidDisconnect:(id)arg1 ;
-(void)start;
-(void)sessionDidConnect:(id)arg1 ;
-(void)updateCurrentState;
-(void)stop;
-(void)setSessionStatus:(CARSessionStatus *)arg1 ;
-(void)deactivate;
-(CARSessionStatus *)sessionStatus;
-(void)dealloc;
@end

