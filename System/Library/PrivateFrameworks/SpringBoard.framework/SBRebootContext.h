/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SBRebootContext : NSObject <NSCopying> {

	NSString* _reason;
	BOOL _isDark;
	BOOL _fromOTASoftwareUpdate;

}

@property (nonatomic,copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
@property (assign,getter=isDark,nonatomic) BOOL dark;               //@synthesize isDark=_isDark - In the implementation block
-(NSString *)reason;
-(BOOL)isDark;
-(id)initWithReason:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDark:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
