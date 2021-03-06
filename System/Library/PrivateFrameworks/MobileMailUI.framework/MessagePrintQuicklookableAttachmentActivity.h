/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/UIActivity.h>

@class UIPrintPageRenderer;

@interface MessagePrintQuicklookableAttachmentActivity : UIActivity {

	UIPrintPageRenderer* _pageRenderer;

}

@property (nonatomic,retain) UIPrintPageRenderer * pageRenderer;              //@synthesize pageRenderer=_pageRenderer - In the implementation block
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
-(UIPrintPageRenderer *)pageRenderer;
-(id)initWithPrintPageRenderer:(id)arg1 ;
-(void)setPageRenderer:(UIPrintPageRenderer *)arg1 ;
@end

