/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext, NSLock, UIImage;

@interface SKUIMediaSocialSaveProfilePhotoOperation : SSVComplexOperation {

	SKUIClientContext* _clientContext;
	NSLock* _lock;
	/*^block*/id _outputBlock;
	UIImage* _photo;

}
-(void)setPhoto:(id)arg1 ;
-(void)setOutputBlock:(/*^block*/id)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(void)main;
-(/*^block*/id)outputBlock;
-(id)_requestWithError:(id*)arg1 ;
-(id)_photoUploadWithResponseDictionary:(id)arg1 ;
@end

