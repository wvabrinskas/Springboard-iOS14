/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AFSiriResponse.h>

@interface STGenericIntentResponse : AFSiriResponse {

	long long _responseCode;

}

@property (assign,nonatomic) long long responseCode;              //@synthesize responseCode=_responseCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setResponseCode:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(long long)responseCode;
@end
