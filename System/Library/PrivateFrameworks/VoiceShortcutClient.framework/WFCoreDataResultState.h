/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface WFCoreDataResultState : NSObject <NSSecureCoding> {

	NSSet* _state;

}

@property (nonatomic,readonly) NSSet * state;              //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithState:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)state;
-(id)initWithCoder:(id)arg1 ;
@end
