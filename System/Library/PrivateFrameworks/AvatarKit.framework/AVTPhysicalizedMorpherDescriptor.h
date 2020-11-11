/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SCNNode, SCNMorpher;

@interface AVTPhysicalizedMorpherDescriptor : NSObject {

	BOOL _mirrored;
	float _simulationFactor;
	SCNNode* _referenceNode;
	SCNNode* _drivingNode;
	SCNMorpher* _writeMorpher;
	unsigned long long _forwardMorphTargetIndex;
	unsigned long long _backwardMorphTargetIndex;
	unsigned long long _leftwardMorphTargetIndex;
	unsigned long long _rightwardMorphTargetIndex;
	unsigned long long _upwardMorphTargetIndex;
	unsigned long long _downwardMorphTargetIndex;
	SCNNode* _extraSimulationFactorReadMorpherNode;
	unsigned long long _extraSimulationFactorTargetIndex;

}
@end
