/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKChatItem.h>

@interface CKTypingChatItem : CKChatItem

@property (getter=isFromMe,nonatomic,readonly) BOOL fromMe; 
@property (nonatomic,readonly) CALayer*<IMTypingIndicatorLayerProtocol> indicatorLayer; 
-(unsigned long long)layoutType;
-(UIEdgeInsets)contentInsets;
-(Class)cellClass;
-(CALayer*<IMTypingIndicatorLayerProtocol>)indicatorLayer;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(id)layoutItemSpacingForEnvironment:(id)arg1 supplementaryItems:(id)arg2 ;
-(BOOL)displayDuringSend;
-(char)transcriptOrientation;
-(BOOL)isFromMe;
-(BOOL)wantsDrawerLayout;
@end
