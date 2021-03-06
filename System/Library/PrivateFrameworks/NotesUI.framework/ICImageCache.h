/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class ICCache, ICLRUCache, NSObject;

@interface ICImageCache : NSObject {

	ICCache* _imageCache;
	ICLRUCache* _bigImageCache;
	NSObject*<OS_dispatch_source> _memoryWarningEventSource;

}

@property (nonatomic,retain) ICCache * imageCache;                                                //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) ICLRUCache * bigImageCache;                                          //@synthesize bigImageCache=_bigImageCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryWarningEventSource;              //@synthesize memoryWarningEventSource=_memoryWarningEventSource - In the implementation block
+(double)bigImageSize;
+(unsigned long long)maxBigImageCount;
-(id)init;
-(void)removeAllImages;
-(void)setImageCache:(ICCache *)arg1 ;
-(id)imageForKey:(id)arg1 ;
-(void)registerForMemoryWarnings;
-(void)unregisterForMemoryWarnings;
-(void)setMemoryWarningEventSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)memoryWarningEventSource;
-(void)receivedMemoryWarning;
-(ICCache *)imageCache;
-(void)removeImageForKey:(id)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(ICLRUCache *)bigImageCache;
-(void)setBigImageCache:(ICLRUCache *)arg1 ;
@end

