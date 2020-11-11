/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
@interface WFPostprocessor : NSObject
+(id)lightweightStripHTMLTags:(id)arg1 ;
+(id)normalizeStrippedHTML:(id)arg1 ;
+(NSRange)rangeOfFirstHTMLTag:(id)arg1 searchRange:(NSRange)arg2 ;
+(id)lightweightStripHTMLTagsForLine:(id)arg1 ;
+(id)postprocessPlainTextWebPage:(id)arg1 ;
+(id)adultWebSiteTagging:(id)arg1 ;
@end
