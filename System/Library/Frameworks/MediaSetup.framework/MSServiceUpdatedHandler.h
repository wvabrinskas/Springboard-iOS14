/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MediaServiceUpdatedClientDelegate;
@interface MSServiceUpdatedHandler : NSObject {

	id<MediaServiceUpdatedClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MediaServiceUpdatedClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)shared;
-(id<MediaServiceUpdatedClientDelegate>)delegate;
-(void)setDelegate:(id<MediaServiceUpdatedClientDelegate>)arg1 ;
-(void)mediaServiceChanged:(id)arg1 homeUserID:(id)arg2 ;
-(void)mediaServiceRemoved:(id)arg1 homeUserID:(id)arg2 ;
-(void)defaultMediaServiceUpdated:(id)arg1 homeUserID:(id)arg2 ;
@end

