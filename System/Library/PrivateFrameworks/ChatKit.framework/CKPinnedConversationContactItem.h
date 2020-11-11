/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol CKPinnedConversationContactItem <NSObject>
@property (nonatomic,readonly) NSString * contactItemIdentifier; 
@property (assign,nonatomic) double contentScale; 
@property (assign,nonatomic) long long contactItemAlignment; 
@required
-(NSString *)contactItemIdentifier;
-(id)contactItemView;
-(long long)contactItemAlignment;
-(double)contentScale;
-(void)setContentScale:(double)arg1;
-(void)setContactItemAlignment:(long long)arg1;
-(id)cnContactWithKeys:(id)arg1;

@end
