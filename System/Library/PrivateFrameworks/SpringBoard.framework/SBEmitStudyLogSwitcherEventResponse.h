/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@class NSString, NSDictionary;

@interface SBEmitStudyLogSwitcherEventResponse : SBSwitcherModifierEventResponse {

	NSString* _name;
	NSDictionary* _payload;

}

@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
-(NSDictionary *)payload;
-(NSString *)name;
-(long long)type;
-(id)initWithStudyLogWithName:(id)arg1 payload:(id)arg2 ;
@end

