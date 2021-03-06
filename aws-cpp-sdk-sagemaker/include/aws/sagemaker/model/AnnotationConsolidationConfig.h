﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Configures how labels are consolidated across human workers.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AnnotationConsolidationConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API AnnotationConsolidationConfig
  {
  public:
    AnnotationConsolidationConfig();
    AnnotationConsolidationConfig(Aws::Utils::Json::JsonView jsonValue);
    AnnotationConsolidationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * annotation consolidation.</p> <p>For the built-in bounding box, image
     * classification, semantic segmentation, and text classification task types,
     * Amazon SageMaker Ground Truth provides the following Lambda functions:</p> <p>
     * <b>Bounding box</b> - Finds the most similar boxes from different workers based
     * on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-BoundingBox</code> </p>
     * <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Bounding box verification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of verification
     * judgement for bounding box labels based on annotations from individual
     * workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Bounding box adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation adjustment</b> - Treats each pixel
     * in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline const Aws::String& GetAnnotationConsolidationLambdaArn() const{ return m_annotationConsolidationLambdaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * annotation consolidation.</p> <p>For the built-in bounding box, image
     * classification, semantic segmentation, and text classification task types,
     * Amazon SageMaker Ground Truth provides the following Lambda functions:</p> <p>
     * <b>Bounding box</b> - Finds the most similar boxes from different workers based
     * on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-BoundingBox</code> </p>
     * <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Bounding box verification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of verification
     * judgement for bounding box labels based on annotations from individual
     * workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Bounding box adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation adjustment</b> - Treats each pixel
     * in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline bool AnnotationConsolidationLambdaArnHasBeenSet() const { return m_annotationConsolidationLambdaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * annotation consolidation.</p> <p>For the built-in bounding box, image
     * classification, semantic segmentation, and text classification task types,
     * Amazon SageMaker Ground Truth provides the following Lambda functions:</p> <p>
     * <b>Bounding box</b> - Finds the most similar boxes from different workers based
     * on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-BoundingBox</code> </p>
     * <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Bounding box verification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of verification
     * judgement for bounding box labels based on annotations from individual
     * workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Bounding box adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation adjustment</b> - Treats each pixel
     * in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline void SetAnnotationConsolidationLambdaArn(const Aws::String& value) { m_annotationConsolidationLambdaArnHasBeenSet = true; m_annotationConsolidationLambdaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * annotation consolidation.</p> <p>For the built-in bounding box, image
     * classification, semantic segmentation, and text classification task types,
     * Amazon SageMaker Ground Truth provides the following Lambda functions:</p> <p>
     * <b>Bounding box</b> - Finds the most similar boxes from different workers based
     * on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-BoundingBox</code> </p>
     * <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Bounding box verification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of verification
     * judgement for bounding box labels based on annotations from individual
     * workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Bounding box adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation adjustment</b> - Treats each pixel
     * in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline void SetAnnotationConsolidationLambdaArn(Aws::String&& value) { m_annotationConsolidationLambdaArnHasBeenSet = true; m_annotationConsolidationLambdaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * annotation consolidation.</p> <p>For the built-in bounding box, image
     * classification, semantic segmentation, and text classification task types,
     * Amazon SageMaker Ground Truth provides the following Lambda functions:</p> <p>
     * <b>Bounding box</b> - Finds the most similar boxes from different workers based
     * on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-BoundingBox</code> </p>
     * <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Bounding box verification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of verification
     * judgement for bounding box labels based on annotations from individual
     * workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Bounding box adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation adjustment</b> - Treats each pixel
     * in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline void SetAnnotationConsolidationLambdaArn(const char* value) { m_annotationConsolidationLambdaArnHasBeenSet = true; m_annotationConsolidationLambdaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * annotation consolidation.</p> <p>For the built-in bounding box, image
     * classification, semantic segmentation, and text classification task types,
     * Amazon SageMaker Ground Truth provides the following Lambda functions:</p> <p>
     * <b>Bounding box</b> - Finds the most similar boxes from different workers based
     * on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-BoundingBox</code> </p>
     * <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Bounding box verification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of verification
     * judgement for bounding box labels based on annotations from individual
     * workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Bounding box adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation adjustment</b> - Treats each pixel
     * in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline AnnotationConsolidationConfig& WithAnnotationConsolidationLambdaArn(const Aws::String& value) { SetAnnotationConsolidationLambdaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * annotation consolidation.</p> <p>For the built-in bounding box, image
     * classification, semantic segmentation, and text classification task types,
     * Amazon SageMaker Ground Truth provides the following Lambda functions:</p> <p>
     * <b>Bounding box</b> - Finds the most similar boxes from different workers based
     * on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-BoundingBox</code> </p>
     * <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Bounding box verification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of verification
     * judgement for bounding box labels based on annotations from individual
     * workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Bounding box adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation adjustment</b> - Treats each pixel
     * in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline AnnotationConsolidationConfig& WithAnnotationConsolidationLambdaArn(Aws::String&& value) { SetAnnotationConsolidationLambdaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function implements the logic for
     * annotation consolidation.</p> <p>For the built-in bounding box, image
     * classification, semantic segmentation, and text classification task types,
     * Amazon SageMaker Ground Truth provides the following Lambda functions:</p> <p>
     * <b>Bounding box</b> - Finds the most similar boxes from different workers based
     * on the Jaccard index of the boxes.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-BoundingBox</code> </p>
     * <p> <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-BoundingBox</code> </p>
     * <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-BoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-BoundingBox</code>
     * </p> </li> </ul> <p> <b>Image classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of an image based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label image classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of an image
     * based on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-ImageMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation</b> - Treats each pixel in an
     * image as a multi-class classification and treats pixel annotations from workers
     * as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-SemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-SemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Text classification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of text based on
     * annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClass</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClass</code>
     * </p> </li> </ul> <p> <b>Multi-label text classification</b> - Uses a variant of
     * the Expectation Maximization approach to estimate the true classes of text based
     * on annotations from individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-TextMultiClassMultiLabel</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-TextMultiClassMultiLabel</code>
     * </p> </li> </ul> <p> <b>Named entity recognition</b> - Groups similar selections
     * and calculates aggregate boundaries, resolving to most-assigned label.</p> <ul>
     * <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-NamedEntityRecognition</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-NamedEntityRecognition</code>
     * </p> </li> </ul> <p> <b>Bounding box verification</b> - Uses a variant of the
     * Expectation Maximization approach to estimate the true class of verification
     * judgement for bounding box labels based on annotations from individual
     * workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation verification</b> - Uses a variant
     * of the Expectation Maximization approach to estimate the true class of
     * verification judgment for semantic segmentation labels based on annotations from
     * individual workers.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-VerificationSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-VerificationSemanticSegmentation</code>
     * </p> </li> </ul> <p> <b>Bounding box adjustment</b> - Finds the most similar
     * boxes from different workers based on the Jaccard index of the adjusted
     * annotations.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentBoundingBox</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentBoundingBox</code>
     * </p> </li> </ul> <p> <b>Semantic segmentation adjustment</b> - Treats each pixel
     * in an image as a multi-class classification and treats pixel adjusted
     * annotations from workers as "votes" for the correct label.</p> <ul> <li> <p>
     * <code>arn:aws:lambda:us-east-1:432418664414:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-east-2:266458841044:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:us-west-2:081040173940:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-1:568282634449:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-1:477331159723:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-2:454466003867:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-south-1:565803892007:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-central-1:203001061592:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-northeast-2:845288260483:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:eu-west-2:487402164563:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ap-southeast-1:377565633583:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> <p>
     * <code>arn:aws:lambda:ca-central-1:918755190332:function:ACS-AdjustmentSemanticSegmentation</code>
     * </p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline AnnotationConsolidationConfig& WithAnnotationConsolidationLambdaArn(const char* value) { SetAnnotationConsolidationLambdaArn(value); return *this;}

  private:

    Aws::String m_annotationConsolidationLambdaArn;
    bool m_annotationConsolidationLambdaArnHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
