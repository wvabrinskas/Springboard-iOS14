/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceShortcutClient/WFWorkflowRunDescriptor.h>

@class NSString;

@interface WFWorkflowDatabaseRunDescriptor : WFWorkflowRunDescriptor {

	NSString* _identifier;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end

