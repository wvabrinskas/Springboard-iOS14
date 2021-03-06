/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface FCHeadlineExperimentalTitleProvider : NSObject {

	BOOL _shouldShowAlternateHeadlines;
	NSString* _feldsparID;

}

@property (nonatomic,copy,readonly) NSString * feldsparID;                   //@synthesize feldsparID=_feldsparID - In the implementation block
@property (assign,nonatomic) BOOL shouldShowAlternateHeadlines;              //@synthesize shouldShowAlternateHeadlines=_shouldShowAlternateHeadlines - In the implementation block
+(BOOL)isDebugModeEnabled;
-(BOOL)shouldShowAlternateHeadlines;
-(id)metadataForDefaultHeadlineWithTitle:(id)arg1 ;
-(id)_debugHeadlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3 ;
-(void)setShouldShowAlternateHeadlines:(BOOL)arg1 ;
-(id)initWithShouldShowAlternateHeadlines:(BOOL)arg1 ;
-(id)_headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3 ;
-(id)headlineMetadataFromTitle:(id)arg1 fromExperimentalTitles:(id)arg2 forArticleID:(id)arg3 ;
-(NSString *)feldsparID;
@end

