/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface ACMImageLoader : NSObject {

	NSMutableDictionary* _imagesCache;

}

@property (readonly) NSMutableDictionary * imagesCache; 
+(id)sharedInstance;
-(id)imageNamed:(id)arg1 ;
-(void)dealloc;
-(NSMutableDictionary *)imagesCache;
@end
