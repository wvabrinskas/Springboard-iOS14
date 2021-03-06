/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCache;

@interface QLThumbnailAdditionCache : NSObject {

	NSCache* _additionsCache;

}
+(id)sharedInstance;
-(id)init;
-(void)cacheAddition:(id)arg1 forDocumentID:(id)arg2 ;
-(id)thumbnailAdditionForItemAtURL:(id)arg1 error:(id*)arg2 ;
-(void)purgeCachedAdditionForItemAtURL:(id)arg1 ;
@end

