/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <Translation/FTRecognitionResult.h>

@class FTRecognitionSausage, NSArray;

@interface FTMutableRecognitionResult : FTRecognitionResult

@property (nonatomic,copy) FTRecognitionSausage * pre_itn; 
@property (nonatomic,copy) FTRecognitionSausage * post_itn; 
@property (nonatomic,copy) NSArray * pre_itn_nbest_choices; 
@property (nonatomic,copy) NSArray * post_itn_nbest_choices; 
@property (nonatomic,copy) NSArray * pre_itn_token_to_post_itn_char_alignment; 
@property (nonatomic,copy) NSArray * choice_alignments; 
-(id)init;
-(FTRecognitionSausage *)post_itn;
-(FTRecognitionSausage *)pre_itn;
-(void)setPre_itn:(FTRecognitionSausage *)arg1 ;
-(void)setPost_itn:(FTRecognitionSausage *)arg1 ;
-(NSArray *)choice_alignments;
-(NSArray *)pre_itn_nbest_choices;
-(void)setPre_itn_nbest_choices:(NSArray *)arg1 ;
-(NSArray *)post_itn_nbest_choices;
-(void)setPost_itn_nbest_choices:(NSArray *)arg1 ;
-(NSArray *)pre_itn_token_to_post_itn_char_alignment;
-(void)setPre_itn_token_to_post_itn_char_alignment:(NSArray *)arg1 ;
-(void)setChoice_alignments:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
