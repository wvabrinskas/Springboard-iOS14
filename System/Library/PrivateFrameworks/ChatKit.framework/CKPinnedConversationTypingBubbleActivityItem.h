/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CKPinnedConversationActivityItem.h>

@class NSString;

@interface CKPinnedConversationTypingBubbleActivityItem : NSObject <CKPinnedConversationActivityItem>

@property (nonatomic,readonly) NSString * activityItemIdentifier; 
@property (nonatomic,readonly) BOOL activityItemAppearsWithAnimation; 
@property (nonatomic,readonly) BOOL activityItemDisappearsWithAnimation; 
@property (nonatomic,readonly) double activityItemContentScale; 
@property (nonatomic,readonly) NSString * attachedContactItemIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityItemView;
-(NSString *)activityItemIdentifier;
-(BOOL)activityItemAppearsWithAnimation;
-(BOOL)activityItemDisappearsWithAnimation;
-(double)activityItemContentScale;
-(NSString *)attachedContactItemIdentifier;
@end

