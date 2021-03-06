/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>

@class RBSProcessHandle, RBSProcessExitContext, NSString;

@interface RBSProcessExitEvent : NSObject <RBSXPCSecureCoding> {

	RBSProcessHandle* _process;
	RBSProcessExitContext* _context;

}

@property (nonatomic,retain) RBSProcessHandle * process;                   //@synthesize process=_process - In the implementation block
@property (nonatomic,retain) RBSProcessExitContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(RBSProcessHandle *)process;
-(unsigned long long)hash;
-(void)setProcess:(RBSProcessHandle *)arg1 ;
-(RBSProcessExitContext *)context;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContext:(RBSProcessExitContext *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

