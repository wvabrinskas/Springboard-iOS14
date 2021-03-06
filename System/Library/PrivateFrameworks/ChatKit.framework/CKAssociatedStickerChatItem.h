/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAssociatedMessageChatItem.h>

@class CKMediaObject, NSString;

@interface CKAssociatedStickerChatItem : CKAssociatedMessageChatItem {

	CKMediaObject* _mediaObject;

}

@property (nonatomic,retain) CKMediaObject * mediaObject;                 //@synthesize mediaObject=_mediaObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * transferGUID; 
-(NSString *)transferGUID;
-(Class)cellClass;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(char)transcriptOrientation;
-(id)IMAssociatedStickerChatItem;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(CKMediaObject *)mediaObject;
@end

