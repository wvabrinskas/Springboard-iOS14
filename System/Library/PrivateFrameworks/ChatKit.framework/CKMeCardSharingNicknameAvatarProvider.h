/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/CNMeCardSharingAvatarProvider.h>

@class NSData, NSString;

@interface CKMeCardSharingNicknameAvatarProvider : NSObject <CNMeCardSharingAvatarProvider> {

	NSData* _imageData;

}

@property (nonatomic,readonly) NSData * imageData;                  //@synthesize imageData=_imageData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithImageData:(id)arg1 ;
-(void)generateAvatarImageOfSize:(CGSize)arg1 imageHandler:(/*^block*/id)arg2 ;
-(NSData *)imageData;
@end

