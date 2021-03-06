/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGTitleGenerator.h>
#import <libobjc.A.dylib/PGSpecBasedTitleGeneratorDelegate.h>

@class NSString;

@interface PGThrowbackThursdayMemoryTitleGenerator : PGTitleGenerator <PGSpecBasedTitleGeneratorDelegate> {

	long long _numberOfYearsAgo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)titleGenerator:(id)arg1 inputForArgument:(id)arg2 ;
-(id)initWithMomentNode:(id)arg1 numberOfYearsAgo:(long long)arg2 ;
@end

