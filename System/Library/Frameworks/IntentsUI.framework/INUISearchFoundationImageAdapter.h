/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IntentsUI/IntentsUI-Structs.h>
#import <SearchFoundation/SFImage.h>

@class NSValue, INImage;

@interface INUISearchFoundationImageAdapter : SFImage {

	NSValue* _sizeValue;
	INImage* _intentsImage;

}

@property (nonatomic,copy) INImage * intentsImage;              //@synthesize intentsImage=_intentsImage - In the implementation block
+(void)initialize;
+(id)_sharedImageLoader;
-(void)setSize:(CGSize)arg1 ;
-(unsigned long long)hash;
-(CGSize)size;
-(BOOL)isEqual:(id)arg1 ;
-(int)source;
-(void)loadImageDataWithCompletionAndErrorHandler:(/*^block*/id)arg1 ;
-(void)loadImageDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithPayloadImage:(id)arg1 ;
-(id)initWithIntentsImage:(id)arg1 ;
-(id)payloadImage;
-(INImage *)intentsImage;
-(void)setIntentsImage:(INImage *)arg1 ;
@end
