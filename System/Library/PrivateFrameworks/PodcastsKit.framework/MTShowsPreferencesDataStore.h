/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PodcastsKit/PodcastsKit-Structs.h>
@interface MTShowsPreferencesDataStore : NSObject

@property (assign,nonatomic) long long sortOrder; 
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sortDescriptorsForSortType:(long long)arg1 ;
-(long long)sortOrder;
-(id)sortDescriptors;
-(void)setSortOrder:(long long)arg1 ;
-(long long)_sortTypeForString:(id)arg1 ;
-(id)_stringForSortType:(long long)arg1 ;
@end

