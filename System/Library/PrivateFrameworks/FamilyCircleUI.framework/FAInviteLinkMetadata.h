/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FAInviteContext, LPImage, LPLinkMetadata;

@interface FAInviteLinkMetadata : NSObject {

	FAInviteContext* _context;
	LPImage* _image;
	LPImage* _icon;

}

@property (nonatomic,retain) FAInviteContext * context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) LPImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) LPImage * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) LPLinkMetadata * bubbleMetadata; 
@property (nonatomic,readonly) LPLinkMetadata * mailMetadata; 
-(LPImage *)icon;
-(void)setIcon:(LPImage *)arg1 ;
-(void)setImage:(LPImage *)arg1 ;
-(LPImage *)image;
-(FAInviteContext *)context;
-(void)setContext:(FAInviteContext *)arg1 ;
-(LPLinkMetadata *)bubbleMetadata;
-(LPLinkMetadata *)mailMetadata;
@end

