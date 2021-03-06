/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray, NSArray;

@interface SCRCArgumentSubcommand : NSObject {

	NSString* _subcommandName;
	NSMutableArray* __optionMutableArray;

}

@property (nonatomic,retain) NSMutableArray * _optionMutableArray;              //@synthesize _optionMutableArray=__optionMutableArray - In the implementation block
@property (nonatomic,copy,readonly) NSArray * optionArray; 
@property (nonatomic,copy) NSString * subcommandName;                           //@synthesize subcommandName=_subcommandName - In the implementation block
+(id)subcommandWithName:(id)arg1 ;
-(int)run;
-(id)init;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)stop;
-(void)showHelp;
-(void)addOption:(char)arg1 argument:(id)arg2 target:(id)arg3 action:(SEL)arg4 argumentDescription:(id)arg5 required:(BOOL)arg6 ;
-(NSString *)subcommandName;
-(NSArray *)optionArray;
-(id)formattedHelpHeader;
-(id)formattedHelpFooter;
-(NSMutableArray *)_optionMutableArray;
-(void)stopDueToSigTerm;
-(void)setSubcommandName:(NSString *)arg1 ;
-(void)set_optionMutableArray:(NSMutableArray *)arg1 ;
@end

