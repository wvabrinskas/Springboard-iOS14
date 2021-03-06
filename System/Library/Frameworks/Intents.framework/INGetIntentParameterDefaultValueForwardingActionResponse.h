/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntentForwardingActionResponse.h>

@class NSData;

@interface INGetIntentParameterDefaultValueForwardingActionResponse : INIntentForwardingActionResponse {

	NSData* _archivedDefaultValue;

}

@property (nonatomic,readonly) NSData * archivedDefaultValue;              //@synthesize archivedDefaultValue=_archivedDefaultValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithArchivedDefaultValue:(id)arg1 error:(id)arg2 ;
-(NSData *)archivedDefaultValue;
-(id)initWithCoder:(id)arg1 ;
@end

