/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSActionResponse.h>

@class INIntentResponse, INIntentForwardingActionResponse;

@interface UISIntentForwardingActionResponse : BSActionResponse {

	INIntentResponse* _cachedIntentResponse;
	INIntentForwardingActionResponse* _cachedIntentForwardingActionResponse;

}

@property (nonatomic,readonly) INIntentResponse * intentResponse; 
@property (nonatomic,readonly) INIntentForwardingActionResponse * intentForwardingActionResponse; 
+(id)responseWithIntentForwardingActionResponse:(id)arg1 ;
+(id)responseWithIntentResponse:(id)arg1 ;
-(INIntentResponse *)intentResponse;
-(INIntentForwardingActionResponse *)intentForwardingActionResponse;
-(id)initWithIntentResponse:(id)arg1 ;
-(id)initWithIntentForwardingActionResponse:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
@end
