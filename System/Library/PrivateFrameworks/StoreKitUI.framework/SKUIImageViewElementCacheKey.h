/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSURL;

@interface SKUIImageViewElementCacheKey : NSObject {

	long long _imageTreatment;
	CGSize _size;
	NSURL* _url;

}
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithURL:(id)arg1 size:(CGSize)arg2 imageTreatment:(id)arg3 ;
@end

