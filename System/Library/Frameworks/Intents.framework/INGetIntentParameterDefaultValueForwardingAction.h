/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntentForwardingAction.h>

@class NSString;

@interface INGetIntentParameterDefaultValueForwardingAction : INIntentForwardingAction {

	NSString* _parameterName;

}

@property (nonatomic,copy,readonly) NSString * parameterName;              //@synthesize parameterName=_parameterName - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)responseClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIntent:(id)arg1 parameterName:(id)arg2 ;
-(void)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)parameterName;
-(/*^block*/id)_completionHandlerWithActionCompletionHandler:(/*^block*/id)arg1 ;
@end
