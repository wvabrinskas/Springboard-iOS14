/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, SBSRemoteAlertDefinition;

@interface SBWakeDestination : NSObject {

	unsigned long long _type;
	NSString* _identifier;
	SBSRemoteAlertDefinition* _remoteAlertDefinition;

}

@property (assign,nonatomic) unsigned long long type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) SBSRemoteAlertDefinition * remoteAlertDefinition;              //@synthesize remoteAlertDefinition=_remoteAlertDefinition - In the implementation block
-(NSString *)identifier;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setRemoteAlertDefinition:(SBSRemoteAlertDefinition *)arg1 ;
-(SBSRemoteAlertDefinition *)remoteAlertDefinition;
@end

