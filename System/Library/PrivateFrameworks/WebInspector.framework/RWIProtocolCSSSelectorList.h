/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString, RWIProtocolCSSSourceRange;

@interface RWIProtocolCSSSelectorList : RWIProtocolJSONObject

@property (nonatomic,copy) NSArray * selectors; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) RWIProtocolCSSSourceRange * range; 
+(id)safe_initWithSelectors:(id)arg1 text:(id)arg2 ;
+(id)ik_cssSelectorListFromSelectorList:(id)arg1 forStyleMarkup:(id)arg2 withNewLineIndexSet:(id)arg3 ;
-(void)setText:(NSString *)arg1 ;
-(RWIProtocolCSSSourceRange *)range;
-(void)setRange:(RWIProtocolCSSSourceRange *)arg1 ;
-(NSString *)text;
-(NSArray *)selectors;
-(void)setSelectors:(NSArray *)arg1 ;
-(id)initWithSelectors:(id)arg1 text:(id)arg2 ;
@end
